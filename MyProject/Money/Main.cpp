#include<conio.h>
#include<iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");

	int money;
	int products;
	

	cout << "������ � ��������" << endl;
	cout << "������� ���������� ����� ����� ";
	cin >> money;
	cout << "\n������� ��������� ������ ";
	cin >> products;
	cout << "\n�� ������� ������ " << money / products << " ���������" << endl;
	_getch();
}