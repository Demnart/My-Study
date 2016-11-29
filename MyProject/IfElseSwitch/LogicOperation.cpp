#include<conio.h>
#include<iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "enter a,b: ";
	cin >> a >> b;
	cout << "a: " << a << "b: " << b<< endl;
	cout << ("a <= b ") << (a <= b)<<endl;
	cout << ("a == b ") << (a == b)<<endl;
	cout << ("a >= b ") << (a >= b)<<endl;
	cout << ("a > b ") << (a > b) << endl;
	cout << ("a < b ") << (a < b) << endl;
	cout << ("a !=b ") << (a != b) << endl;

	_getch();
}