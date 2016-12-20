#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	const int NUMBERSOFCALL = 5;
	cout << "This program will calculate " << NUMBERSOFCALL << " Fibonacci numbers at a time" << endl;
	int num = 0, num1 = 1;
	char wantMore = '\0';
	do
	{
		for (int i = 0; i < NUMBERSOFCALL; i++)
		{
			cout << num + num1 << " ";
			int num2Temp = num1;
			num1 = num + num1;
			num = num2Temp;
		}
		cout << endl << "Do you want more numbers?(y/n)";
		cin >> wantMore;
	} while (wantMore == 'y');
	_getch();
	return 0;
}