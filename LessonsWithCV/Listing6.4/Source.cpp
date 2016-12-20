#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
	cout << "Enter two integers\n";
	int num1 = 0, num2 = 0;
	cin >> num1;
	cin >> num2;

	cout << "Enter \'d\' to divide, anything else to multiply:  " << endl;
	char userInput;
	cin >> userInput;

	if (userInput == 'd')
	{
		cout << "You want to division!" << endl;
		if (num2 != 0)
		{
			cout << "No div-by-zero, processing to calculate" << endl;
			cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
		}
		else
		{
			cout << "Division by zero is not allowed" << endl;
		}
	}
	else
	{
		cout << "You want multiplication!!!" << endl;
		cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
	}
	_getch();
	return 0;
}