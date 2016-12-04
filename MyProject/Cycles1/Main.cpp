#include<conio.h>
#include<iostream>
#include<cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i=0;

	while (i < 10) {
		cout << "Цикл выполнился " << i << " раз " << endl;
		i++;
	}
	_getch();
	return 0;
}