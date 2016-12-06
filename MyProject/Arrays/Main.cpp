#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
    
	int Array[10];
	//cout << sizeof(Array) << endl;
	/*Array[0] = 15;
	Array[1] = 21;
	Array[2] = 12;*/

/*	for (int i = 0; i < A; i++)
	{
		Array[i] = i + 1;
		cout << "A[" << i << "] = " << Array[i] << endl;
	}*/
	for(int i= 0;i<10;i++)
	{
		cout << "Введите значение "<< i <<" элемента массива ";
		while (!(cin >> Array[i]))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Введите значение " << i << " элемента массива ";
		}
		
	}
	system("cls");
	cout << "\t\t\t***Исходный массив***\n";
	for (int i = 0; i < 10; i++)
	{
		cout << "A[" << i << "] = " << Array[i] << endl;
	}
	
	int Max =0;
	int Min =Array[0];
	for (int i = 1; i < 10; i++)
	{ 
		if (Max < Array[i])
		{
			Max = Array[i];
		}
		if (Min > Array[i])
		{
			Min = Array[i];
		}
	
	}
	cout << "Максимальное значение " << Max<<endl;
	cout << "Минимальное значение  " << Min << endl;
	_getch();
	return 0;
}