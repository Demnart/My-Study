#include<conio.h>
#include<iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");
	int a, b,result;
	a = 200;
	b = 3600;

	result = (a%b) / 60;
	cout << result;


	_getch();
}