#include<conio.h>
#include<iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int a;
	int b;
	char c;

	cout << "\t\t***Calculator***" << endl;
	cout << "������� ���������� ��� ����� ";
	cin >> a >> b;
	cout << "\n�������� ���������� ����������� �������� ";
	cin >> c;

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
	





	_getch();
	return 0;
}