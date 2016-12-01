#include<conio.h>
#include<iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int a;
	int b;
	char c;
	bool doAgain = true;

	do {
		cout << "\t\t***Calculator***" << endl;
		cout << "Введите пожалуйста число_операцию_число ";
		cin >> a >> c >> b;


		switch (c)
		{
		case '+':
			cout << "Вы выбрали операцию сложения. Результат равен " << (a + b) << endl;
			break;
		case '-':
			cout << "Вы выбрали операцию вычитания . Результат равен " << (a - b) << endl;
			break;
		case '/':
			cout << "Вы выбрали операцию деления . Результат равен " << (a / b) << endl;
			break;
		case '*':
			cout << "Вы выбрали операцию умножения . Результат равен " << (a * b) << endl;
			break;
		case '%':
			cout << "Вы выбрали операцию деления по модулю . Результат равен " << (a % b) << endl;
			break;
		default:
			cout << "\n\nВы ввели неправильную операцию.Программа будет закрыта!" << endl;
			_getch();
			return -1;
			break;
		}
	} while (doAgain);
	





	_getch();
	return 0;
}