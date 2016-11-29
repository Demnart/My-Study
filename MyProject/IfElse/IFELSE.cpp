#include<conio.h>
#include<iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");
	double BMI;

	cout << "Enter BMI";
	cin >> BMI;
	
	if (BMI <= 15) {
		cout << "Вы страдаете анарексией" << endl;
	}
	else if(BMI<=20)
	{
		cout << "Вам нужно поправитсья\n";
	}
	else if (BMI<=25)
	{
		cout << "У вас нормальный вес\n";
	}
	else
	{
		cout << "ВАМ капец!";
	}
	_getch();
}