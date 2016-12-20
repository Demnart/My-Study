#include<conio.h>
#include<iostream>
#include<string>

using namespace std;

int main()
{
	const int ARRAY_SIZE = 10;
	string massiv[ARRAY_SIZE];
	//TODO при нажатие клавиши пробела присходит переброс на следующий элемент массива
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << "Enter your " << i+1 << " word ";
		while (!(cin >> massiv[i]))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Enter your " << i + 1 << " word ";
		}
	}
	system("cls");
	cout << "\t\t\t***Your massive***\n";

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << "Our array[" << i << "] = " << massiv[i] << " and have " << massiv[i].size() << " letters" << endl;
	}



	_getch();
	return 0;
}