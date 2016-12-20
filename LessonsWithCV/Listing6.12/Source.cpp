#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
	const int ARRAY_LEN = 4;
	const int ARRAY_LEN1 = 5;
	int myInt[ARRAY_LEN]{12,3,4,5};
	int myInt1[ARRAY_LEN1] = {20,15,5,7,8};

	for(int i =0;i<ARRAY_LEN;i++)
	{
		for (int j = 0; j < ARRAY_LEN1; j++)
		{
			cout << myInt[i] << " * " << myInt1[j] << " = " << myInt[i] * myInt1[j] << endl;
		}
		cout << endl;
	}
	_getch();
	return 0;
}