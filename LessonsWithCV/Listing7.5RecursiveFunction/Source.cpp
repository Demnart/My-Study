#include<conio.h>
#include<iostream>

using namespace std;

int getFibNumber(int fibIndex)
{
	if (fibIndex < 2)
	{
		return fibIndex;
	}
	else
		return getFibNumber(fibIndex - 1) + getFibNumber(fibIndex - 2);
}

int main()
{
	cout << "Enter 0-based index of desired Fibonacci number ";
	int index = 0;
	cin >> index;

	cout << "Fibonacci number is " << getFibNumber(index) << endl;
	_getch();
	return 0;
}