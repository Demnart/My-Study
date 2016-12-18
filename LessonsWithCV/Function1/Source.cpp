#include<conio.h>
#include<iostream>

using namespace std;

int Look();

int main()
{
	Look();
	_getch();
	return Look();
}

int Look()
{
	cout << "Hey i write first c++ programm with using another function" << endl;
	cout << "Now we will see operation 5 + 7  = " << 5 + 7 << endl;
	cout << "Now we will see operation 5 * 7  = " << 5 * 7 << endl;
	cout << "Now we will see operation 5 - 7  = " << 5 - 7 << endl;
	cout << "Now we will see operation 5 / 7  = " << 5 / 7 << endl;
	cout << "Now we will see operation 5 % 7  = " << 5 % 7 << endl;
	return 0;
}