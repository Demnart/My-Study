#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	const int N = 10;
	double students[N];

	for (int i = 0; i < N; i++)
	{
		cout << "Vvedite srednii bal " << i + 1 << " studenta ";
		while (!(cin >> students[i]) || !(students[i] > 0 && students[i]<=5))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Vvedite srednii bal " << i + 1 << " studenta ";
		}
	}

	system("cls");

	cout << "Srednie balli kajdogo studenta"<<endl;
	for (int i = 0; i < N; i++)
	{
		cout << "Student " << i + 1 << " imeet srednii bal " << students[i] << endl;
	}


	_getch();
	return 0;
}