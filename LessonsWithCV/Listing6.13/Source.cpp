#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
	const int ROWS = 3;
	const int COLUMNS = 4;

	int myInt[ROWS][COLUMNS];
	cout << "Enter your array\n";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			cout << "array[" << i << "][" << j << "] = ";
			while (!(cin >> myInt[i][j]))
			{
				cin.clear();
				while (cin.get() != '\n');
				cout << "array[" << i << "][" << j << "] = ";
			}
		}
		cout << endl;
	}

	cout << "\nYour array\n";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			cout << "array[" << i << "][" << j << "] = " << myInt[i][j] << endl;
		}
		cout << endl;
	}
	_getch();
	return 0;
}