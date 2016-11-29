#include<conio.h>
#include<iostream>

using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");

	int money;
	int products;
	

	cout << "Товары в магазине" << endl;
	cout << "Введите количество ваших денег ";
	cin >> money;
	cout << "\nВведите стоимость товара ";
	cin >> products;
	cout << "\nВы сможете купить " << money / products << " продуктов" << endl;
	_getch();
}