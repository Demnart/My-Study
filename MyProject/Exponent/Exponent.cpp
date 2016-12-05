#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	unsigned int nubmer;
	unsigned long long resultat = 1;
	int exponent = 2;

	cout << "Введите степень в которую вы хотите возвести 2 ";
	
	if (!(cin>>nubmer)|| nubmer ==0 )
	{
		cout << "Неверный ввод!!!";
		_getch();
		return -1;
	}



	for (int i = 1; i <= nubmer; i++)
	{
		resultat *= exponent;
		cout << "2 в степени " << i << " равно " << resultat << endl;
	}







	_getch();
	return 0;
}