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
		cout << "¬ведите значение "<< i <<" элемента массива ";
		while (!(cin >> Array[i]))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "¬ведите значение " << i << " элемента массива ";
		}
		
	}
	system("cls");
	cout << "\t\t\t***»сходный массив***\n";
	for (int i = 0; i < 10; i++) {
		cout << "A[" << i << "] = " << Array[i] << endl;
	}
	

	_getch();
	return 0;
}