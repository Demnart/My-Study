#include<conio.h>
#include<iostream>
#include<string>

using namespace std;

int main()
{
	char buffer[20] = { '\0' };
	cout << "Enter a line of text: " << endl;
	string lineEntered;
	getline(cin, lineEntered);

	if (lineEntered.length() < 20)
	{
		strcpy_s(buffer, lineEntered.c_str());
		cout << "Buffer contains " << buffer << endl;
	}
	_getch();
	return 0;

}