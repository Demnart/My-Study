#include<conio.h>
#include<iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int ruble;
	cout << "������� ���-�� ������ ";
	cin >> ruble;
	cout << "� ��� " << ruble <<" ";

	if (ruble < 0) {
		cout << "���� �������� �������������!";
		_getch();
		return -1;
	}

	if ((ruble % 100) >= 11 && (ruble % 100) <= 19) {
		cout << "������!";
	}
	else
	{
		switch (ruble%10)
		{
		case 1: 
			cout << "�����!";
			break;
		case 2:
		case 3:
		case 4: 
			cout << "�����!";
			break;
		default:
			cout << "������";
			break;
		}
	}




	_getch();
	return 0;
}