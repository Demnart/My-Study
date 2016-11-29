#include<conio.h>
#include<iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");
	double a, b;
	double procent;
	cout << "Введите пожалуйста два числа ";
	cin >> a >> b;
	procent = (a / b) * 100;
	cout << "\n Процент первого числа от второго равен " << procent << "%"<< endl;

	_getch();
}