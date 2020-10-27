#include "Header.h"

using namespace System;
using namespace System::Windows::Forms;
#define _rand(min, max) ( rand() % ((max) - (min) + 1) + (min) )


int KMPMatch(std::string fin_filename, std::string P, int& numCmp, time_t& time) {
	time_t begin;
	std::ifstream fin(fin_filename); // �������� ���� ��� ������
	if (fin.is_open())
	{

		std::string T;
		std::getline(fin, T);
		begin = clock();
		int n = T.length();// ����� 
		int m = P.length();// ����� ������� 

		std::vector<int> pi;
		pi.resize(m);
		pi[0] = 0;
		int j = 0;
		int i = 1;
		while (i < m) {
			if (P[i] == P[j]) {
				numCmp++;
				pi[i] = j + 1;
				i++;
				j++;
			}
			else if (j == 0) {
				numCmp++;
				pi[i] = 0;
				i++;
			}
			else
				j = pi[j - 1];
		}

		int k = 0;
		int l = 0;
		while (k < n)
		{
			if (T[k] == P[l])
			{
				numCmp++;
				k++;
				l++;
				if (l == m) {
					time = clock() - begin;
					return k - m;
				}
			}
			else if (l == 0)
			{
				numCmp++;
				k++;
				if (k == n) {
					time = clock() - begin;
					return -1;
				}
			}
			else
				l = pi[l - 1];
		}

	}
	time = clock() - begin;
	return -2;

}


int HorspoolMatch(std::string fin_filename, std::string P, int& numCmp, time_t& time)
{
	time_t begin;
	std::ifstream fin(fin_filename); // �������� ���� ��� ������
	if (fin.is_open())
	{
		std::string T;
		std::getline(fin, T);
		int n = T.length();// ����� 
		int m = P.length();// ����� ������� 
		begin = clock();
		int Slide[255];// ������ ������� �� 256 ��������
		for (int i = 0; i < 255; i++)
			Slide[i] = m;// ������� ������� ����������� ������� �������
		for (int l = 0; l < m - 1; l++)         // � �� 
		{
			Slide[P[l]] = m - 1 - l;
		}
		int i = m - 1;//������� ������� ����� �������

		while (i <= (n - 1))// ���� ����� ����� �� ��������� ������� ����� ������
		{
			int k = 0;// ���������� ��������� ��������
			while (k <= m - 1 && P[m - 1 - k] == T[i - k])// ���� ���������� ���������� ������ ������� �           
			{
				numCmp++;
				// ����  ������� ������ ��������� � �������� � ������
				k = k + 1;             // ����������� �  �� 1
			}

			if (k == m) {
				time = clock() - begin;// ��������� ���� ��� �� ����������� ����� ���������� ���������- �� ���������� 
				return  i + 1 - m;          // ���� ���������� ������ ��  ����������  ������� ������� ���������� �������� � ������ 
			}
			else                       // ���� �� ��� ������� 
			{
				// cout << "�������� " << Slide[T[i]] << endl;
				i = i + Slide[T[i]];    //  �������� i(������� ������� ����� �������) �� ������� �������

			}
			numCmp++;
		}// ���� ��������� ���������� �� �������� ����� �� �� - 
		  //������ ��� �� ����� � ����� �� ����� 
		time = clock() - begin;
		return -1;
	}// ������ ��������� � �������
	time = clock() - begin;
	return -2;
}

void textGeneration(/*std::string fin_filename,*/ std::string fout_filename, int size, int sought_coef, std::string sought, bool boolSought,bool type,std::string sChar) {
	//std::ifstream fin(fin_filename); // �������� ���� ��� ������
	//if (fin.is_open())
	//{

	std::ofstream fout;          // ����� ��� ������
	fout.open(fout_filename); // �������� ���� ��� ������
	if (fout.is_open())
	{
		int l1 = size / 10 * sought_coef, l2 = size - l1;
		if (type) {
			srand(time(NULL));
			char chars[63]; // ��� �������

			// ��������� ������
			for (int i = 65, n = 0; i <= 90; ++i, ++n)
				chars[n] = (char)i; // (char) �������� ��� � �������
			for (int i = 97, n = 26; i <= 122; ++i, ++n)
				chars[n] = (char)i; // (char) �������� ��� � �������
			for (int i = 48, n = 52; i <= 57; ++i, ++n)
				chars[n] = (char)i; // (char) �������� ��� � �������
			chars[62] = (char)32;

			for (int i = 0; i < l1; ++i)
				fout << chars[_rand(0, 62)];
			if (boolSought)
				fout << sought;
			for (int i = 0; i < l2; ++i)
				fout << chars[_rand(0, 62)];
		}
		else
		{
			for (size_t i = 0; i < l1; i++)
				fout << sChar;
			if (boolSought)
				fout << sought;
			for (size_t i = 0; i < l2; i++)
				fout << sChar;
		}
		/*if (number != 8 && (e->KeyChar < 48 || (e->KeyChar > 58 && e->KeyChar < 65) || (e->KeyChar > 90 && e->KeyChar < 97) || e->KeyChar > 122))*/
		//std::string s;
		//std::getline(fin, s);

		//int l1 = 1, l2 = 1;
		////if (((size / 100 * sought_coef) / s.length()) > 1)
		//l1 = (size * sought_coef * 25 / 100) /*/ s.length()*/;
		////if (((size / 100 * (100 - sought_coef)) / s.length()) > 1)
		//l2 = size - l1;/*(size / 100 * (100 - sought_coef)) / s.length();*/

		//for (size_t i = 0; i < l1; i++)
		//	fout << s /*<< " "*/;
		//if (boolSought)
		//	fout << sought /*<< " "*/;
		//for (size_t i = 0; i < l2; i++)
		//	fout << s /*<< " "*/;
	}
	/*	fin.close();
	}
	else
		MessageBox::Show("������ ������ ����� � ��������!", "������!");*/
}