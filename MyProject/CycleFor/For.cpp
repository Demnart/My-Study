#include<conio.h>
#include<iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int numberOfCycle;
	cout << "Please enter your number ";
	cin >> numberOfCycle;
	for (int i = 0; i < numberOfCycle; i++)
	{
		for (int j = 0; j < i; j++) {
			cout << '*';
		}
		cout << endl;
}
	_getch();
	return 0;
}