#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
	enum daysOfWeek
	{
		Sunday,
		Monday,
		Tuesday,
		Wednsday,
		Thursday,
		Friday,
		Saturday
	};
	cout << "Find what days of the week are named after" << endl;
	cout << "Enter a number for a day (Sunday =  0)" << endl;
	int day = Sunday;
	cin >> day;

	switch(day)
	{
	case Sunday:
		cout << "Sunday was named after sun" << endl;
		break;
	case Monday:
		cout << "Monday was named after moon" << endl;
		break;
	case Tuesday:
		cout << "Tuesday was named after Mara" << endl; 
			break;
	case Wednsday:
		cout << "Wednsday was named after Mercury" << endl;
		break;
	case Thursday:
		cout << "Thursday was named after Jupiter" << endl;
		break;
	case Friday:
		cout << "Friday was named after Venus" << endl;
		break;
	case Saturday:
		cout << "Saturday was named after Sarurn" << endl;
		break;
	default:
		cout << "Wrong input,execute again" << endl;
		break;
	}
	_getch();
	return 0;
}