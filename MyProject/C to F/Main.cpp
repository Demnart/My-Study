#include<conio.h>
#include<iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");
	double celsium;
	double farenheit;
	cout << "������� ������� �������: ";
	cin >> celsium;
	farenheit = (celsium *1.8) + 32;
	cout << "\n���� ������� " << celsium << " �������� �������.\n";
	cout << "� ��� ����� " << farenheit << " �������� ����������";
	_getch();
}