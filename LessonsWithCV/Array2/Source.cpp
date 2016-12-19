#include<conio.h>
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string secondWord = "Hello";
	string firstWord = "World";
	string Concatination = secondWord + ' ' + firstWord;

	cout << secondWord << endl;
	cout << firstWord << endl;
	cout << Concatination << endl;

	string copy = firstWord;
	cout << copy << endl;

	_getch();
	return 0;
}