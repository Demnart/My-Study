#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
	cout << "Enter two numbers" << endl;
	int num = 0, num1 = 0;
	cin >> num;
	cin >> num1;
	int max = 0;
	max = (num > num1) ? num : num1;
	cout << "The greater of " << num << " and " << num1 << " is " << max << endl;
	_getch();
	return 0;
}