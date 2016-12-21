#include<conio.h>
#include<iostream>

using namespace std;
//Обьявление глобальной переменной пи!
const double pi = 3.14159;
//Обьявление функций(Прототип)
double area(double userInput);
double circumference(double userInput);

int main()
{
	double radius = 0;
	cout << "Enter radius ";
	cin >> radius;
	//вызов функции area  с передачей ей агумента
	cout << "Area is " << area(radius) << endl;
	//вызов функции circumference  с передачей ей агумента
	cout << "Circumference is " << circumference(radius) << endl;
	_getch();
	return 0;
}
//Определение функции area
double area(double userInput)
{
	return pi*userInput*userInput;
}
//Определение функции circumference
double circumference(double userInput)
{
	return 2 * pi*userInput;
}