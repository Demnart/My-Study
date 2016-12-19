#include<conio.h>
#include<iostream>

using namespace std;

void arrayTest() 
{
	const int arrayIndex = 10;
	int ourArray[arrayIndex];

	for (int i = 0; i < arrayIndex; i++)
	{
		cout << "Input " << i << " elemet of array ";
		while (!(cin >> ourArray[i]))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Input " << i << " elemet of array ";
		}
	}

	system("cls");
	cout << "Our new array" << endl;

	for (int i = 0; i < arrayIndex; i++)
	{
		cout << "Our array[" << i << "] = " << ourArray[i] << endl;
	}
}

int main()
{
	arrayTest();
	_getch();
	return 0;
}