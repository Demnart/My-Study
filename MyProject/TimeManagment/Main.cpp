#include<conio.h>
#include<iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");
	int second, minute, hour, days,Secunds;
	const int SIZE = 60;

	cout << "\t��������� ������� �������\n";
	cout << "������� ���������� ������  ";
	cin >> Secunds;
	hour = Secunds / (SIZE*SIZE);// ���������� �����
	minute = (Secunds % (SIZE*SIZE)) / SIZE; // ���������� ���������� �����
	second = Secunds%SIZE;
	cout << "\n��������� ���������� ������ " << Secunds << " ����� " << hour << " �. " << minute << " �. " << second << " �. " << endl;
		
		
	
	_getch();

}