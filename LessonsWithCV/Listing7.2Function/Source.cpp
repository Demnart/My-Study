#include<conio.h>
#include<iostream>

using namespace std;

const double pi = 3.14159;

double surfaceArea(double userInputRadius,double userInputHeight);

int main()
{
	double radius = 0, height = 0;
	cout << "Enter radius of cylinder ";
	cin >> radius;
	cout << "\nEnter height of cylender ";
	cin >> height;

	cout << "\nThe surfaceArea of cylender is " << surfaceArea(radius, height) << endl;
	_getch();
	return 0;

}

double surfaceArea(double userInputRadius, double userInputHeight)
{
	return (2 * pi*userInputRadius*userInputRadius) + (2 * pi*userInputRadius*userInputHeight);
}