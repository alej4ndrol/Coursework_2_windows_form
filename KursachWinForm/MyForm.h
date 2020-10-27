#pragma once

namespace KursachWinForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			comboBox1->SelectedItem = comboBox1->Items[0];
			comboBox1->Text = comboBox1->SelectedItem->ToString();
			//
			//TODO: добавьте код конструктора
			//
		}

		//protected:
		//	virtual void WndProc(Message% m) override
		//	{
		//		System::Windows::Forms::Form::WndProc(m);
		//		if (m.Msg == WM_DEVICECHANGE)
		//		{
		//			TreeUpdate();           // Обновление дерева устройств
		//		}
		//	}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ListBox^ Files;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::GroupBox^ GroupBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::ProgressBar^ progressBar2;
	private: System::Windows::Forms::Button^ button5;




	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Files = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->GroupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->GroupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(175, 243);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Сгенерировать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Генерация строки";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Размер строки";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(152, 45);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Подстрока";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(155, 61);
			this->textBox1->MaxLength = 120;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(116, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// Files
			// 
			this->Files->Cursor = System::Windows::Forms::Cursors::Default;
			this->Files->FormattingEnabled = true;
			this->Files->HorizontalScrollbar = true;
			this->Files->Location = System::Drawing::Point(6, 46);
			this->Files->Name = L"Files";
			this->Files->Size = System::Drawing::Size(344, 186);
			this->Files->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(275, 243);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Поиск";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(9, 62);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5000000, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 8;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// trackBar1
			// 
			this->trackBar1->LargeChange = 1;
			this->trackBar1->Location = System::Drawing::Point(9, 195);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(262, 45);
			this->trackBar1->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 173);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(163, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Желаемая позиция подстроки";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 26);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Выберите файл";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->progressBar2);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->trackBar1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(277, 276);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Генерация";
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(9, 243);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(160, 23);
			this->progressBar2->Step = 25;
			this->progressBar2->TabIndex = 16;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(197, 124);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(46, 13);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Символ";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(249, 121);
			this->textBox4->MaxLength = 1;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(22, 20);
			this->textBox4->TabIndex = 14;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 105);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(64, 13);
			this->label10->TabIndex = 13;
			this->label10->Text = L"Тип строки";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Случайный набор", L"Повторяющийся символ" });
			this->comboBox1->Location = System::Drawing::Point(9, 121);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 21);
			this->comboBox1->TabIndex = 12;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(155, 86);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(116, 17);
			this->checkBox1->TabIndex = 11;
			this->checkBox1->Text = L"Добавить в текст";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->progressBar1);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->Files);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Location = System::Drawing::Point(295, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(356, 276);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Поиск";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(98, 16);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(96, 23);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Удалить файлы";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(9, 243);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(260, 23);
			this->progressBar1->Step = 25;
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 13;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(200, 16);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 23);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Обновить список файлов";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// chart2
			// 
			chartArea1->AxisX->LabelAutoFitStyle = static_cast<System::Windows::Forms::DataVisualization::Charting::LabelAutoFitStyles>((((System::Windows::Forms::DataVisualization::Charting::LabelAutoFitStyles::IncreaseFont | System::Windows::Forms::DataVisualization::Charting::LabelAutoFitStyles::DecreaseFont)
				| System::Windows::Forms::DataVisualization::Charting::LabelAutoFitStyles::StaggeredLabels)
				| System::Windows::Forms::DataVisualization::Charting::LabelAutoFitStyles::WordWrap));
			chartArea1->AxisX->LabelStyle->IsStaggered = true;
			chartArea1->AxisX->MaximumAutoSize = 50;
			chartArea1->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			legend1->Position->Auto = false;
			legend1->Position->Height = 15;
			legend1->Position->Width = 10;
			legend1->Position->Y = 85;
			this->chart2->Legends->Add(legend1);
			this->chart2->Location = System::Drawing::Point(9, 351);
			this->chart2->Name = L"chart2";
			this->chart2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			this->chart2->PaletteCustomColors = gcnew cli::array< System::Drawing::Color >(2) {
				System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
					static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
						static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)))
			};
			series1->ChartArea = L"ChartArea1";
			series1->IsValueShownAsLabel = true;
			series1->IsXValueIndexed = true;
			series1->Legend = L"Legend1";
			series1->Name = L"KMP";
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::String;
			series2->ChartArea = L"ChartArea1";
			series2->IsValueShownAsLabel = true;
			series2->Legend = L"Legend1";
			series2->Name = L"Horspool";
			series2->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::String;
			this->chart2->Series->Add(series1);
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(830, 278);
			this->chart2->TabIndex = 15;
			this->chart2->Text = L"chart2";
			// 
			// chart1
			// 
			chartArea2->AxisX->Crossing = -1.7976931348623157E+308;
			chartArea2->AxisX->LabelAutoFitStyle = static_cast<System::Windows::Forms::DataVisualization::Charting::LabelAutoFitStyles>((((System::Windows::Forms::DataVisualization::Charting::LabelAutoFitStyles::IncreaseFont | System::Windows::Forms::DataVisualization::Charting::LabelAutoFitStyles::DecreaseFont)
				| System::Windows::Forms::DataVisualization::Charting::LabelAutoFitStyles::StaggeredLabels)
				| System::Windows::Forms::DataVisualization::Charting::LabelAutoFitStyles::WordWrap));
			chartArea2->AxisX->LabelStyle->IsStaggered = true;
			chartArea2->AxisX->MaximumAutoSize = 50;
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::Top;
			legend2->Name = L"Legend1";
			legend2->Position->Auto = false;
			legend2->Position->Height = 15;
			legend2->Position->Width = 10;
			legend2->Position->Y = 85;
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(6, 34);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			this->chart1->PaletteCustomColors = gcnew cli::array< System::Drawing::Color >(2) {
				System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
					static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192))), System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
						static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)))
			};
			series3->ChartArea = L"ChartArea1";
			series3->IsValueShownAsLabel = true;
			series3->Legend = L"Legend1";
			series3->Name = L"KMP";
			series3->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::String;
			series4->ChartArea = L"ChartArea1";
			series4->IsValueShownAsLabel = true;
			series4->Legend = L"Legend1";
			series4->Name = L"Horspool";
			series4->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::String;
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Size = System::Drawing::Size(833, 287);
			this->chart1->TabIndex = 16;
			this->chart1->Text = L"chart1";
			// 
			// GroupBox3
			// 
			this->GroupBox3->Controls->Add(this->button4);
			this->GroupBox3->Controls->Add(this->label9);
			this->GroupBox3->Controls->Add(this->label8);
			this->GroupBox3->Controls->Add(this->chart1);
			this->GroupBox3->Controls->Add(this->chart2);
			this->GroupBox3->Location = System::Drawing::Point(12, 294);
			this->GroupBox3->Name = L"GroupBox3";
			this->GroupBox3->Size = System::Drawing::Size(845, 637);
			this->GroupBox3->TabIndex = 18;
			this->GroupBox3->TabStop = false;
			this->GroupBox3->Text = L"Графики";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(188, 11);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(135, 23);
			this->button4->TabIndex = 19;
			this->button4->Text = L"Очистить диаграммы";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(3, 333);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(148, 15);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Колличество сравнений";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(6, 16);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(120, 15);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Время выполнения";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(11, 22);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 13);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Позиция";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(11, 22);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Позиция";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(68, 19);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 21;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(68, 19);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 22;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBox2);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Location = System::Drawing::Point(657, 12);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(200, 59);
			this->groupBox4->TabIndex = 23;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"KMP search";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->textBox3);
			this->groupBox5->Controls->Add(this->label7);
			this->groupBox5->Location = System::Drawing::Point(657, 77);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(200, 58);
			this->groupBox5->TabIndex = 24;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"BM Horspool search";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(884, 936);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->GroupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(900, 975);
			this->MinimumSize = System::Drawing::Size(700, 700);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Test";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->GroupBox3->ResumeLayout(false);
			this->GroupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);

		}

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
		   // private: void listBox1_SelectedIndexChanged(object sender, System.EventArgs e);

	 //private: System::Void Files_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
};
}
