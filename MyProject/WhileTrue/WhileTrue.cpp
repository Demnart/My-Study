#include<conio.h>
#include<iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i = 0;
	while (i < 10) {
	
		i++;
		if (i == 5) {
			continue;
		}
		cout << i << endl;
		
}
	_getch();
	return 0;
}