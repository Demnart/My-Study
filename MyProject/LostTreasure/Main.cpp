#include<iostream>
#include<conio.h>
#include<string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() {
	setlocale(LC_ALL, "Russian");
	int adventurers;
	int survive;
	int killed;
	const int GOLD_PIECE = 900;
	string name;
	cout << "������� ���������� ��������� ����������� : ";
	cin >> adventurers;
	cout << "\n������� ����� ������� ��� ������: ";
	cin >> killed;
	survive = adventurers - killed;
	cout << "\n������� ���� ��� :";
	cin >> name;
	cout << endl;
	cout << "\n���� ������� ��������� ����� �������� �����. ";
	cout << "������� �������� ����������� ����� ������� ���� ����� " << adventurers << " �������� � ����������� �������� ���� ���������� ��������� ���������" << endl;
	cout << "\n �� ���������� �������� ���� ������ ����  "<< survive << " ���������\n";
	cout << "����� ������� ������ �� ��� ������� ������ �������� ������������� ����";
	cout << "\n� ����� ��� ����� �����  " << (GOLD_PIECE%survive) << " �������  ������";
	





	_getch();
	return 0;
}