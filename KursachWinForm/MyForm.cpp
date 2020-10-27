#include "MyForm.h"
#include <Windows.h>
#include "header.h"
#include <msclr\marshal_cppstd.h>
//#include <string>


using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace System::Collections::Generic;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	KursachWinForm::MyForm form;
	Application::Run(% form);
}



//int main()
//{
//    time_t begin, end;
//    setlocale(LC_ALL, "Russian");
//    string T;
//
//    string P;//строка, которую ищем
//    int pos, pos1;
//    getline(cin, T);// 
//    cout << endl;
//    getline(cin, P);//
//    cout << endl;
//    cout << endl;
//    cout << "Horspul: " << endl;
//    begin = clock();
//    pos = HorspoolMatch(T, P);
//    end = clock();
//    if (pos == -1)
//        cout << "Поиск не дал результатов :-(((    " << endl;
//    else
//        cout << " Искомое сочетание найдено !!!  С позиции   " << pos << endl;
//    cout << "Horspul time: " << end - begin << " ms." << endl;
//
//    cout << "KMP: " << endl;
//    begin = clock();
//    pos1 = KMPMatch(T, P);
//    end = clock();
//    if (pos == -1)
//        cout << "Поиск не дал результатов :-(((    " << endl;
//    else
//        cout << " Искомое сочетание найдено !!!  С позиции   " << pos << endl;
//    cout << "Horspul time: " << end - begin << " ms." << endl;
//    // system("PAUSE");
//    return EXIT_SUCCESS;
//}
//System::String^ managed = (textBox1->Text);
//std::string sought = msclr::interop::marshal_as<std::string>(managed);

System::Void KursachWinForm::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)//генерация
{
	progressBar2->Value = 0;
	progressBar2->PerformStep();
	Files->Items->Clear();
	int size = Convert::ToInt32(numericUpDown1->Value);
	int sought_coef = Convert::ToInt32(trackBar1->Value);

	System::String^ managed = (textBox1->Text);
	std::string sought = msclr::interop::marshal_as<std::string>(managed);

	// done !!!!todo написать проверку на наличие файла и схранение файлов с новым именем
	bool boolSought = checkBox1->Checked;
	if (sought != "") {
		progressBar2->PerformStep();

		//создаем папку в месте где хранится экзешник
		String^ folder = System::IO::Path::GetDirectoryName(System::Reflection::Assembly::GetExecutingAssembly()->Location);
		String^ folderSrc = folder;
		if (!Directory::Exists(Path::Combine(folderSrc, "srcText")))
			Directory::CreateDirectory(Path::Combine(folderSrc, "srcText"));
		if (!Directory::Exists(Path::Combine(folder, "generated_files")))
			Directory::CreateDirectory(Path::Combine(folder, "generatedFiles"));
		folder += "\\generatedFiles";
		std::string	folderStd = msclr::interop::marshal_as<std::string>(folder);

		folderSrc += "\\srcText";
		std::string	folderSrcStd = msclr::interop::marshal_as<std::string>(folderSrc) + "\\srcText.txt";
		//**************************
		//std::ofstream fout;          // поток для записи
		//fout.open(folderSrcStd); // окрываем файл для записи
		//if (fout.is_open()) {
		//	//std::string s = "first place to satisfy subscriptions paid by individuals or institutions ";
		//	std::string s = "f";
		//	fout << s;
		//}
		//fout.close();

		// String^ folder = "F:/kursach";
		//std::string folderStd = "F:/kursach";

		bool type = true;
		System::String^ sChar;
		std::string	sCharStd;
		if (comboBox1->SelectedItem == comboBox1->Items[1]) {
			type = false;
			sChar = textBox4->Text->ToString();
			if (sChar == "") {
				MessageBox::Show("Введите символ для заполнения строки!", "Ошибка!");
				return System::Void();
			}
			sCharStd = msclr::interop::marshal_as<std::string>(sChar);
		}
		progressBar2->PerformStep();

		//создаем папку 
		std::string fileName = folderStd + "\\Sou_" + sought + " Bool_" + std::to_string(boolSought) + " Size_" + std::to_string(size) + " Coef_" + std::to_string(sought_coef) + " Rand_" + std::to_string(type) + " sCh_" + sCharStd + ".txt";
		//********************

		String^ fileNameSys = gcnew String(fileName.c_str());



		bool fileExistense = false;
		array<String^>^ file = Directory::GetFiles(folder);
		for (int i = 0; i < file->Length; i++)
			if (fileNameSys == Convert::ToString(file[i]))
				fileExistense = true;
		if (!fileExistense)
			textGeneration(/*"F:/kursach/src/srcText.txt"*//*folderSrcStd,*/ fileName, size, sought_coef, sought, boolSought, type, sCharStd);
		else
			MessageBox::Show(("Такой файл уже существует " + fileNameSys), "Ошибка!");

		file = Directory::GetFiles(folder);
		if (file->Length > 0)
			for (int i = 0; i < file->Length; i++)
				if (Convert::ToString(file[i])->IndexOf("Sou_") != -1)
					Files->Items->Add(Convert::ToString(file[i])->Remove(0, Convert::ToString(file[i])->IndexOf("Sou_")));
		//done !!!todo удалить начало пути сделать доступным только выбор только созданного файла или !!!!!добавлять значения из выбранного файла в переменные!!!!! скопировать во вторую кнопку из файлнейм копирование со строки

		//done !!!!todo ограничить символы для подстроки 

		//done +-+-+- todo добавить шаблон в генерацию чтобы не нужен был файл
		//done +-+-+-todo сделать генерацию одному по слову а не в шаблонах

		//done +-+-+-todo прогнать русские буквы и пробелы в подстроку

		//dene !!!!todo удалить начало пути 


	}
	else
		MessageBox::Show("Подстрока пустая!\nПерегенирируйте текст введя подстроку для поиска", "Ошибка!");
	if (progressBar2->Value == 75)
		progressBar2->PerformStep();
	else
		progressBar2->Value = 0;
	return System::Void();
}

System::Void KursachWinForm::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)//поиск
{
	progressBar1->Value = 0;
	progressBar1->PerformStep();
	if (Files->SelectedItem)
	{
		//System::String to std::string
		/*System::String^ managed = (textBox1->Text);
		std::string sought = msclr::interop::marshal_as<std::string>(managed);*/
		String^ folder = System::IO::Path::GetDirectoryName(System::Reflection::Assembly::GetExecutingAssembly()->Location);
		folder += "\\generatedFiles";
		std::string	folderStd = msclr::interop::marshal_as<std::string>(folder);

		System::String^ managed = (Files->SelectedItem->ToString());
		std::string selectedFile = msclr::interop::marshal_as<std::string>(managed);

		bool selecCheck = false;
		array<String^>^ file = Directory::GetFiles(folder);
		if (file->Length > 0)
			for (int i = 0; i < file->Length; i++)
				if (Convert::ToString(file[i]) == folder + "\\" + Files->SelectedItem->ToString())
					selecCheck = true;
		if (selecCheck == false) {
			MessageBox::Show("Выбранный файл не найден!\nОбновите список файлов.", "Ошибка!");
			return System::Void();
		}
		//*******************
		std::string sought = selectedFile;
		sought.erase(0, sought.find("Sou_") + 4);
		sought.erase(sought.find("Bool_") - 1, sought.length());
		time_t time = 0;
		int numCmp = 0;
		textBox2->Text = Convert::ToString(KMPMatch(folderStd + "\\" + selectedFile, sought, numCmp, time));
		progressBar1->PerformStep();
		/*chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();*/
		chart1->Series[0]->Points->AddXY(Files->SelectedItem->ToString(), time);
		chart2->Series[0]->Points->AddXY(Files->SelectedItem->ToString(), numCmp);
		numCmp = 0;
		textBox3->Text = Convert::ToString(HorspoolMatch(folderStd + "\\" + selectedFile, sought, numCmp, time));
		progressBar1->PerformStep();
		chart1->Series[1]->Points->AddXY(Files->SelectedItem->ToString(), time);
		chart2->Series[1]->Points->AddXY(Files->SelectedItem->ToString(), numCmp);
	}
	else 
		MessageBox::Show("Выберите файл!", "Ошибка!");
	if (chart1->Series[0]->Points->Count > 5) {
		button2->Enabled = false;
		MessageBox::Show("Диаграммы переполнены!\nНажмите 'Очистить диаграммы' чтобы продолжить.", "Ошибка!");
	}
	if (progressBar1->Value == 75)
		progressBar1->PerformStep();
	else
		progressBar1->Value = 0;
	return System::Void();
}

System::Void KursachWinForm::MyForm::textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{

	char number = e->KeyChar;
	if (number != 8 && (e->KeyChar < 48 || (e->KeyChar > 58 && e->KeyChar < 65) || (e->KeyChar > 90 && e->KeyChar < 97) || e->KeyChar > 122))
	{
		e->Handled = true;
	}
	return System::Void();
}

//ref struct MyStruct
//{
//	System::String^ nameValue = "";
//	System::String^ nameDisplay = "";
//};

System::Void KursachWinForm::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)//обновление
{

	Files->Items->Clear();

	String^ folder = System::IO::Path::GetDirectoryName(System::Reflection::Assembly::GetExecutingAssembly()->Location);
	if (!Directory::Exists(Path::Combine(folder, "generated_files")))
		Directory::CreateDirectory(Path::Combine(folder, "generatedFiles"));
	folder += "\\generatedFiles";
	array<String^>^ file = Directory::GetFiles(folder);

	/*array<MyStruct^>^ names;
	Array::Resize(names, file->Length);*/
	//names[0]->nameValue = "skde";
	if (file->Length > 0)
		//int liml = Convert::ToString(file[0])->IndexOf("Sou_");
		for (int i = 0; i < file->Length; i++) //{
			/*names[i] = gcnew MyStruct;
			names[i]->nameValue = Convert::ToString(file[i]);
			names[i]->nameDisplay = names[i]->nameValue->Remove(0, names[i]->nameValue->IndexOf("Sou_"));*/
			//Convert::ToString(file[i])->Remove(0, Convert::ToString(file[i])->IndexOf('Sou_'));
			//Files->Items->Add(Convert::ToString(file[i]));
			if (Convert::ToString(file[i])->IndexOf("Sou_") != -1)
				Files->Items->Add(Convert::ToString(file[i])->Remove(0, Convert::ToString(file[i])->IndexOf("Sou_")));
	//}

//}

/*Files->ValueMember = "nameValue";
Files->DisplayMember = "nameDisplay";
Files->DataSource = names;
Files->BindingContext = this->BindingContext;*/
//Files->SelectedIndexChanged += Files_SelectedIndexChanged;

	return System::Void();
}

System::Void KursachWinForm::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	chart1->Series[0]->Points->Clear();
	chart1->Series[1]->Points->Clear();
	button2->Enabled = true;
	chart2->Series[0]->Points->Clear();
	chart2->Series[1]->Points->Clear();
	if (chart1->Series[0]->Points->Count > 5) {
		button2->Enabled = false;
		MessageBox::Show("Диаграммы переполнены!\nНажмите 'Очистить диаграммы' чтобы продолжить.", "Ошибка!");
	}
	return System::Void();
}

System::Void KursachWinForm::MyForm::comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (comboBox1->SelectedItem == comboBox1->Items[1])
		textBox4->Enabled = true;
	else
		textBox4->Enabled = false;
	return System::Void();
}

System::Void KursachWinForm::MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Windows::Forms::DialogResult result = MessageBox::Show("Вы уверены что хотите удалить сгенерированные файлы?", "Удалить файлы!", MessageBoxButtons::YesNo);
	if (result == ::DialogResult::Yes)
	{
		String^ folder = System::IO::Path::GetDirectoryName(System::Reflection::Assembly::GetExecutingAssembly()->Location);
		if (!Directory::Exists(Path::Combine(folder, "generated_files")))
			Directory::CreateDirectory(Path::Combine(folder, "generatedFiles"));
		folder += "\\generatedFiles";
		array<String^>^ file = Directory::GetFiles(folder);


		if (file->Length > 0)
			for (int i = 0; i < file->Length; i++) {
				try {
					System::IO::File::Delete(file[i]);
				}
				catch (Exception^ e) {
					MessageBox::Show("ОШИБКА удаления файла: " + e->Message, "Ошибка!");
				}
			}
		Files->Items->Clear();
	}

	return System::Void();
}

//System::Void KursachWinForm::MyForm::Files_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
//{
//	return System::Void();
//}


