#include<conio.h>
#include<iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");
	bool a = false;
	bool b = true;
	cout.setf(ios_base::boolalpha);
	cout << "a= " << a << ", b= " << b<< endl;
	cout << "!a= " << (!a) << endl;
	cout << "!b= " << (!b) << endl;

	b = false;
	cout << "a||b= " << (a || b)<<endl;//Логическое сложение (ИЛИ)
	b = true;
	cout << "a||b= " << (a || b) << endl;
	a = true; 
	b = false;
	cout << "a||b= " << (a || b) << endl;
	b = true;
	cout << "a||b= " << (a || b) << endl<<endl;

	a = false;
	b = false;
	cout << "a&b= " << (a && b) << endl;//Логическое умножение (И)
	b = true;
	cout << "a&&b= " << (a && b) << endl;
	a = true;
	b = false;
	cout << "a&&b= " << (a && b) << endl;
	b = true;
	cout << "a&&b= " << (a && b) << endl;






	_getch();
}