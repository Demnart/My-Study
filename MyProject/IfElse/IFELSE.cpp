#include<conio.h>
#include<iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");
	double BMI;

	cout << "Enter BMI";
	cin >> BMI;
	
	if (BMI <= 15) {
		cout << "�� ��������� ����������" << endl;
	}
	else if(BMI<=20)
	{
		cout << "��� ����� �����������\n";
	}
	else if (BMI<=25)
	{
		cout << "� ��� ���������� ���\n";
	}
	else
	{
		cout << "��� �����!";
	}
	_getch();
}