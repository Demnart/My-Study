#include<iostream>
#include<conio.h>

using std::cout;
using std::endl;

int main() {
	setlocale(LC_ALL, "Russian");
	// ������������� ����������
	int apple;
	int carrots;
	int potaetoes;
	double money;
	char simbol;
	// ������������ ���������� ��������
	apple = 3;
	carrots = 7;
	potaetoes = 15;
	money = 17.85;
	simbol = 'x';

	cout << "Apples =  " << apple << endl;
	cout << "Carrots = " << carrots << endl;
	cout << "Potaetoes = " << potaetoes << endl;
	cout << "����������\n";
	_getch();
	
	return 0;
}