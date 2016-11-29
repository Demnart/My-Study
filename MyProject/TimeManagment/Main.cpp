#include<conio.h>
#include<iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");
	int second, minute, hour, days,Secunds;
	const int SIZE = 60;

	cout << "\tПрограмма расчета времени\n";
	cout << "Введите количество секунд  ";
	cin >> Secunds;
	hour = Secunds / (SIZE*SIZE);// количество часов
	minute = (Secunds % (SIZE*SIZE)) / SIZE; // количество оставшихся минут
	second = Secunds%SIZE;
	cout << "\nВведенное количество секунд " << Secunds << " равно " << hour << " ч. " << minute << " м. " << second << " с. " << endl;
		
		
	
	_getch();

}