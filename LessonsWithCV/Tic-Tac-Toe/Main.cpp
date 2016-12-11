#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
	const int SIZE = 3;
	char array[SIZE][SIZE] = { {'O','X','O'},
							{ ' ','X','X' },
							{'X','O','O'} };

	cout << "\nThere is Tic-tac-toe" << endl;

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout << array[i][j];
		}
		cout << endl;
	}
	cout << "\nNow \'X\' turn" << endl;
	array[1][0] = 'X';

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout << array[i][j];
		}
		cout << endl;
	}
	cout << "\n\'X\' Win!!!" << endl;
	_getch();
	return 0;
}