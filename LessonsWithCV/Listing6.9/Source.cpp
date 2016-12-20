#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
	char userSelection;

	do
	{
		int num = 0, num1 = 0;
		cout << "Enter two numbers\n";
		cin >> num;
		cin >> num1;

		cout << num << " + " << num1 << " = " << num + num1 << endl;
		cout << num << " * " << num1 << " = " << num * num1 << endl;

		cout << "Do you want to do one more time?(y/n)" << endl;
		
		cin >> userSelection;

	} while (userSelection == 'y');
	cout << "GoodBye!!!";
	_getch();
	return 0;
}