#include<iostream>
#include<conio.h>

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

	if (day == Sunday)
	{
		cout << "Sunday was named after the Sun" << endl;
	}
	else if (day == Monday)
	{
		cout << "Monday was named after Moon" << endl;
	}
	else if (day == Tuesday)
	{
		cout << "Tuesday was named after Mars" << endl;
	}
	else if (day == Wednsday)
	{
		cout << "Wednsday was named after Mercury" << endl;
	}
	else if (day == Thursday)
	{
		cout << "Thursday was named after Jupiter" << endl;
	}
	else if (day == Friday)
	{
		cout << "Friday was named after Venus" << endl;
	}
	else if (day == Saturday)
	{
		cout << "Saturday was named after Saturn" << endl;
	}
	else
	{
		cout << "Wrong input,excute again" << endl;
	}
	_getch();
	return 0;
}