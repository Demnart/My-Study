#include<iostream>
#include<conio.h>

using std::cout;
using std::endl;
using std::cin;

void main() {
	setlocale(LC_ALL, "Russian");
	double BMI, height, weight;
	cout << "\t\t������� ���������� ��� ���� � ���";
	cin >> height >> weight;
	BMI = weight / (height*height);
	cout << "\n��� ������ BMI ����� " << BMI << endl;

	_getch();
}