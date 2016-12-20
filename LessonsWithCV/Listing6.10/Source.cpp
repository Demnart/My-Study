#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
	const int ARRAY_LENGTH = 5;
	int massiv[ARRAY_LENGTH] = { 0 };

	for (int i = 0; i < ARRAY_LENGTH; i++)
	{
		cout << "Enter in " << i << " index your value : ";
		while (!(cin >> massiv[i]))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Enter in " << i << " index your value : ";
		}
	}

	cout << "\nYour Array is\n";

	for (int i = 0; i < ARRAY_LENGTH; i++)
	{
		cout << "Array[" << i << "] = " << massiv[i] << endl;
	}
	_getch();
	return 0;
}