#include<conio.h>
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int number;
	int tries = 0;
	cout << "Enter your number with diaposon of 1 to 15 ";
	cin >>number;
	int random;
	do
	{
		++tries;
		random = rand() % 15 + 1;
		cout << random << endl;
		if (random == number)
		{
			cout << "Computer was find your number from " << tries << " tries";
		}
	} while (random != number);
	_getch();
	return 0;
}