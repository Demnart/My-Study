#include<conio.h>
#include<iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");
	double dollar;
	double euro;
	double lei;
	const double dollarPerLei = 20.14;
	const double dollarPerEuro = 0.82;
	cout << "\t������� ���������� ������ � �������� ";
	cin >> dollar;
	lei = dollar*dollarPerLei;
	euro = dollar*dollarPerEuro;
	cout << "\n\n";
	cout << dollar << " �������� ����� " << lei << " �����\n";
	cout << dollar << " �������� ����� " << euro << " ����\n";
	_getch();
}