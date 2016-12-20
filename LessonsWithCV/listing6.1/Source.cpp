#include<conio.h>
#include<iostream>

using namespace std;

int main()
{

	cout << "Enter two integers " << endl;
	int num1 = 0, num2 = 0;

	cin >> num1;
	cin >> num2;

	cout << "Enter \'y\' to multiply,anything else to add\n";
	char userSelection = '\o';
	cin >> userSelection;

	int result = 0;

	if (userSelection == 'y')
	{
		result = num1 + num2;
	}
	else
	{
		result = num1 * num2;
	}
	cout << "Reuslt = " << result << endl;
	_getch();
	return 0;
}