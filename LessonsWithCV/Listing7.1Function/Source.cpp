#include<conio.h>
#include<iostream>

using namespace std;
//���������� ���������� ���������� ��!
const double pi = 3.14159;
//���������� �������(��������)
double area(double userInput);
double circumference(double userInput);

int main()
{
	double radius = 0;
	cout << "Enter radius ";
	cin >> radius;
	//����� ������� area  � ��������� �� ��������
	cout << "Area is " << area(radius) << endl;
	//����� ������� circumference  � ��������� �� ��������
	cout << "Circumference is " << circumference(radius) << endl;
	_getch();
	return 0;
}
//����������� ������� area
double area(double userInput)
{
	return pi*userInput*userInput;
}
//����������� ������� circumference
double circumference(double userInput)
{
	return 2 * pi*userInput;
}