#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	const int N = 15;

	bool simpleNumber[N + 1];

	for (int i = 2;i<=N;i++)
	{
		simpleNumber[i] = true;

	}

	for (int i = 2; i<=N; i++)
	{
		if (simpleNumber[i])
		{
			for (int j = i*i; j <= N; j += i)
			{
				simpleNumber[j] = false;
				}
	}
	}	
	for (int i = 2; i <= N; i++)
	{
		if (simpleNumber[i]) {
			cout << "Простое число " << i << endl;
		}
	}










	_getch();
	return 0;
}