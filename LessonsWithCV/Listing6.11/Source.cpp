#include<conio.h>
#include<iostream>

using namespace std;

int main()
{

	for (;;)
	{
		int num = 0, num1 = 0;
		cout << "Enter your numbers:\n";
		while (!(cin >> num) || !(cin >> num1))
		{
			cin.clear();
			while (cin.get() != '\n');
		}
		cout << "Do you want to change a numbers?(y/n)\n";
		char changeNumber;
		cin >> changeNumber;
		if (changeNumber == 'y')
		{
			continue;
		}

		cout << num << " + " << num1 << " = " << num + num1 << endl;
		cout << num << " * " << num1 << " = " << num * num1 << endl;

		cout << "\n Do you want to do one more time?(y/n)\n";
		char userInput;
		cin >> userInput;

		if (userInput == 'n')
		{
			break;
		}

	}
	cout << "GoodBye!!!" << endl;
	_getch();
	return 0;
}