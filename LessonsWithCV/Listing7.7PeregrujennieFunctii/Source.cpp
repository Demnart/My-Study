#include<conio.h>
#include<iostream>

using namespace std;

const double pi = 3.14159;

double area(double radius);
double area(double radius, double height);

int main()
{
	cout << "Enter z for cylinder,c for circle" << endl;
	char choice = '0';
	cin >> choice;

	cout << "Enter radius ";
	double radius = 0;
	cin >> radius;


	if (choice == 'z')
	{
		cout << "Enter height ";
		double height = 0;
		cin >> height;

		cout << "Area of cylinder " << area(radius, height) << endl;

	}
	else
	{
		cout << "Area of circle " << area(radius) << endl;
	}

	_getch();
	return 0;
}

double area(double radius)
{
	return pi*radius*radius;
}

double area(double radius, double height)
{
	return 2 * area(radius) + 2 * pi*radius*height;
}