#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	const int students = 10;
	double array[students];

	for (int i = 0; i < students; i++) 
	{
		cout << "������� ������� ��� " << i +1  << " �������� ";
		while(!(cin>>array[i])||!(array[i]>0&&array[i]<=5))
		{
			cin.clear();
			while (cin.get() !='\n');
			cout << "������� ������� ��� " << i+1 << " �������� ";
		}
	}

	system("cls");

	cout << "�������� ������� ������� �����������" << endl;
	for (int i = 0; i < students; i++)
	{
		cout << "������� ���� " << i + 1 << " �������� ����� " << array[i] << endl;
	}

	for (int i = 0; i < students; i++)
	{
		if (array[i] < 2.5)
		{
			cout << "�� ��������� " << i + 1 << " ��������\n";
			array[i] = -1;
		}
	}

	cout << "\n����� ���������� � ��� �������� ��������� ��������" << endl;

	for (int i = 0; i < students; i++)
	{
		cout << i + 1 << " ������� � �������� ������" << array[i] << endl;
	}


	_getch();


	return 0;



}