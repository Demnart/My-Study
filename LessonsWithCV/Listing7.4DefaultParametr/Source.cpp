#include<conio.h>
#include<iostream>

using namespace std;
//Обьявление функции(Прототип)
double area(double userInput, double pi = 3.14);//Число пи в данном случае будте дефолтным параметром

int main()
{
	double radius=0;
	cout << "Enter your radius ";
	cin >> radius;
	//Условия изменения числа пи
	cout << "\nPi is a 3.14 do you want to change it?(y/n) ";
	char userAnswer = '\0';
	cin >> userAnswer;

	double areaOfCirle= 0 ;

	if (userAnswer == 'y')//Если польователь желает изменить число пи
	{
		double newPi = 0;//создание новой переменной хранящей будущее значение числа пи
		cout << "Enter your new Pi ";
		cin >> newPi;
		areaOfCirle = area(radius, newPi);//передача аргументов функции 
	}
	else //если пользователь не желает менять число пи
	{
		areaOfCirle = area(radius);//передается только основной аргумент
	}

	cout << "Your Area is " << areaOfCirle << endl;
	_getch();
	return 0;
}
//Вызов функции
double area(double userInputRadius, double pi)
{
	return userInputRadius*userInputRadius*pi;
}