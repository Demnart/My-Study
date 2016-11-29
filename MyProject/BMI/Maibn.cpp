#include<iostream>
#include<conio.h>

using std::cout;
using std::endl;
using std::cin;

void main() {
	setlocale(LC_ALL, "Russian");
	double BMI, height, weight;
	cout << "\t\tВведите пожалуйста ваш рост и вес";
	cin >> height >> weight;
	BMI = weight / (height*height);
	cout << "\nВаш индекс BMI равен " << BMI << endl;

	_getch();
}