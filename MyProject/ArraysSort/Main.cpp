#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	const int N = 10;
	int array[N];
	for (int i = 0; i < N; i++)
	{
		cout << "¬ведите " << i + 1 << " элемент массива ";
		while (!(cin >> array[i])){
			cin.clear();
			while (cin.get() != '\n');
			cout << "¬ведите " << i+1 << " элемент массива ";
		}
	}
	system("cls");

	cout << "\t\t\t*** »сходный массив***" << endl;

	for(int i = 0; i<N;i++)
	{
		cout << "array[" << i << "] = " << array[i] << endl;
	}

	//Buble-sort

	for (int i = N - 1; i > 0; i--)
	{
		for(int j=0;j<i;j++)
		{
			double sort = array[j];
			array[j] = array[j + 1];
			array[j + 1] = sort;
		
		}
	}

	_getch();
	return 0;
}