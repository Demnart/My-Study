#include<conio.h>
#include<iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int a;
	int b;
	char c;
	bool doAgain = true;
	char m;

	do {
		cout << "\t\t***Calculator***" << endl;
		cout << "������� ���������� �����_��������_����� ";
		cin >> a >> c >> b;
		switch (c)
		{
		case '+':
			cout << "�� ������� �������� ��������. ��������� ����� " << (a + b) << endl;
			break;
		case '-':
			cout << "�� ������� �������� ��������� . ��������� ����� " << (a - b) << endl;
			break;
		case '/':
			cout << "�� ������� �������� ������� . ��������� ����� " << (a / b) << endl;
			break;
		case '*':
			cout << "�� ������� �������� ��������� . ��������� ����� " << (a * b) << endl;
			break;
		case '%':
			cout << "�� ������� �������� ������� �� ������ . ��������� ����� " << (a % b) << endl;
			break;
		default:
			cout << "\n\n�� ����� ������������ ��������.��������� ����� �������!" << endl;
			_getch();
			return -1;
			break;
			
		}
		cout << "\n ������� ��������� ��������? y/n ";
		cin >> m;
		if (m == 'y') {
			doAgain = true;
		}
		else
		{
			doAgain = false;
			return -1;
		}
	} while (doAgain);
	





	_getch();
	return 0;
}