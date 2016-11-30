#include<conio.h>
#include<iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int ruble;
	cout << "Введите кол-во рублей ";
	cin >> ruble;
	cout << "У вас " << ruble <<" ";

	if (ruble < 0) {
		cout << "Ваше значение отрицательное!";
		_getch();
		return -1;
	}

	if ((ruble % 100) >= 11 && (ruble % 100) <= 19) {
		cout << "Рублей!";
	}
	else
	{
		switch (ruble%10)
		{
		case 1: 
			cout << "Рубль!";
			break;
		case 2:
		case 3:
		case 4: 
			cout << "Рубля!";
			break;
		default:
			cout << "Рублей";
			break;
		}
	}




	_getch();
	return 0;
}