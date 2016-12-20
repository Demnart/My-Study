#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
	char userSelection = 'y';

	while (userSelection =='y')
	{
		int num = 0, num1 = 0;
		cout << "Enter two number" << endl;
		cin >> num;
		cin >> num1;

		cout << num << " + " << num1 << " = " << num + num1 << endl;
		cout << num << " * " << num1 << " = " << num * num1<<endl;

		cout << "Do you want to do this operation one more time(y/n)" << endl;
		cin >> userSelection;

	}

	cout << "GoodBye" << endl;
	_getch();
	return 0;
}