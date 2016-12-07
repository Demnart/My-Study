#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int array[10];
	int b;
	cout << "Нахождение индекса массива по элементу " << endl;
	
	for (int i = 0; i < 10; i++)
	{
		cout << "Введите " << i << " элемент массива ";
		while (!(cin >> array[i]))
		{
			cin.clear();
			while (cin.get() != '\n');
			{
				cout << "Введите " << i << " элемент массива ";
			}
		}
	}
	system("cls");
	cout << "Введите нужный элемент массива ";
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

	cout << "\n\t\t\t***Исходный массив***" << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "array[" << i << "] " << array[i] << endl;
	}

	_getch();
	return 0;
}