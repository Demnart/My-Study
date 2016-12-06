#include<conio.h>
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(static_cast<unsigned int>(time(0)));
	int secretNuber = rand() % 100 + 1;
	int tries = 0;
	int enter;
	do {
		cout << "Enter your nuber ";
		cin >> enter;
		++tries;
		if(enter>secretNuber)
		{
			cout << "Too high\n";
		}else if(enter<secretNuber)
		{
			cout << "Too low\n";

		}else
		{
			cout << "Yeah, you did it for in " << tries << " tries";
		}
	} while (enter != secretNuber);
	_getch();
	return 0;
}