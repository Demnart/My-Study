#include<conio.h>
#include<iostream>

using namespace std;

double area(double userInput, double pi = 3.14);

int main()
{
	double radius=0;
	cout << "Enter your radius ";
	cin >> radius;

	cout << "\nPi is a 3.14 do you want to change it?(y/n) ";
	char userAnswer = '\0';
	cin >> userAnswer;

	double areaOfCirle= 0 ;

	if (userAnswer == 'y')
	{
		double newPi = 0;
		cout << "Enter your new Pi ";
		cin >> newPi;
		areaOfCirle = area(radius, newPi);
	}
	else 
	{
		areaOfCirle = area(radius);
	}

	cout << "Your Area is " << areaOfCirle << endl;
	_getch();
	return 0;
}

double area(double userInputRadius, double pi)
{
	return userInputRadius*userInputRadius*pi;
}