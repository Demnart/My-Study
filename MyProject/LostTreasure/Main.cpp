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
	cout << "Введите количество искателей приключений : ";
	cin >> adventurers;
	cout << "\nВведите число меньшее чем первое: ";
	cin >> killed;
	survive = adventurers - killed;
	cout << "\nВведите ваше имя :";
	cin >> name;
	cout << endl;
	cout << "\nНаша история произошла много столетий назад. ";
	cout << "Храбрые искатели приключений число которых было равно " << adventurers << " проникли в заброшенную гробницу дабы заполучить несметные богатства" << endl;
	cout << "\n Но достигнуть желанной цели смогли лишь  "<< survive << " храбрецов\n";
	cout << "После дележки добычи ты наш главарь должен получить причитающееся тебе";
	cout << "\nи равна эта сумма будет  " << (GOLD_PIECE%survive) << " слиткам  золота";
	





	_getch();
	return 0;
}