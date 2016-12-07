#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int array[10];
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		cout << "¬ведите " << i << " элемент массива ";
		while (!(cin >> array[i]))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "¬ведите " << i << " элемент массива ";
		}
	}
	system("cls");
	cout << "\t\t\t***»сходный массив***" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "Array[" << i << "] = " <<array[i]<<endl;
	}
	for (int i = 0; i < 10; i++)
	{
		sum += array[i];
	}
	cout << "—умма всех элементов равна " << sum << endl;


	_getch();
	return 0;
}