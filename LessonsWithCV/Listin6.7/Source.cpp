#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
jumpToPoint:
	int number1 = 0, number2 = 0;
	cout << "Enter two numbers\n";
	cin >> number1;
	cin >> number2;

	cout << number1 << " * " << number2 << " = " << number1*number2 << endl;
	cout << number1 << " + " << number2 << " = " << number1+number2 << endl;

	cout << "Do you wish to perform another operation(y/n)" << endl;
	char repeat = 'y';
	cin >> repeat;
	
	if (repeat == 'y')
	{
		goto jumpToPoint;
	}

	cout << "Good Bye" << endl;
	_getch();
	return 0;
}