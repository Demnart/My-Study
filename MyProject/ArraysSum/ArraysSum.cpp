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
		cout << "������� " << i << " ������� ������� ";
		while (!(cin >> array[i]))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "������� " << i << " ������� ������� ";
		}
	}
	system("cls");
	cout << "\t\t\t***�������� ������***" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "Array[" << i << "] = " <<array[i]<<endl;
	}
	for (int i = 0; i < 10; i++)
	{
		sum += array[i];
	}
	cout << "����� ���� ��������� ����� " << sum << endl;
	cout << "������� �������������� ����� " << sum / 10 << endl;

	_getch();
	return 0;
}