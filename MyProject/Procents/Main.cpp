#include<conio.h>
#include<iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");
	double a, b;
	double procent;
	cout << "������� ���������� ��� ����� ";
	cin >> a >> b;
	procent = (a / b) * 100;
	cout << "\n ������� ������� ����� �� ������� ����� " << procent << "%"<< endl;

	_getch();
}