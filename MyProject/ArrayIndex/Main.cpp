#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int array[10];
	int b;
	cout << "���������� ������� ������� �� �������� " << endl;
	
	for (int i = 0; i < 10; i++)
	{
		cout << "������� " << i << " ������� ������� ";
		while (!(cin >> array[i]))
		{
			cin.clear();
			while (cin.get() != '\n');
			{
				cout << "������� " << i << " ������� ������� ";
			}
		}
	}
	system("cls");
	cout << "������� ������ ������� ������� ";
	cin >> b;
	for (int i = 0; i < 10; i++)
	{
		if (b == array[i])
		{
			cout << i << endl;
			i = 10;
		}
		else if (!(10 - i - 1))
		{
			cout << -1 << endl;
		}
	}

	cout << "\n\t\t\t***�������� ������***" << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "array[" << i << "] " << array[i] << endl;
	}

	_getch();
	return 0;
}