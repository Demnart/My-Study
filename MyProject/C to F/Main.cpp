#include<conio.h>
#include<iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");
	double celsium;
	double farenheit;
	cout << "Введите градусы Цельсия: ";
	cin >> celsium;
	farenheit = (celsium *1.8) + 32;
	cout << "\nВами введены " << celsium << " градусов Цельсия.\n";
	cout << "И они равны " << farenheit << " градусам Фаренгейта";
	_getch();
}