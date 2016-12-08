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
		cout << "Введите средний бал " << i +1  << " студента ";
		while(!(cin>>array[i])||!(array[i]>0&&array[i]<=5))
		{
			cin.clear();
			while (cin.get() !='\n');
			cout << "Введите средний бал " << i+1 << " студента ";
		}
	}

	system("cls");

	cout << "Итоговая таблица средних результатов" << endl;
	for (int i = 0; i < students; i++)
	{
		cout << "Средний балл " << i + 1 << " студента равен " << array[i] << endl;
	}

	for (int i = 0; i < students; i++)
	{
		if (array[i] < 2.5)
		{
			cout << "Мы отчисляем " << i + 1 << " студента\n";
			array[i] = -1;
		}
	}

	cout << "\nПосле отчисления у нас остались следующие студенты" << endl;

	for (int i = 0; i < students; i++)
	{
		cout << i + 1 << " Студент с итоговым баллом" << array[i] << endl;
	}


	_getch();


	return 0;



}