#include<conio.h>
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str1 = "Game";
	string str2("Over");
	string str3(3,'!');

	string phrase = str1 + " " + str2 + str3;
	cout << phrase << endl;
	cout << "Phrase lenght is " << phrase.length() << endl;
	cout << "The first letter is " << phrase[0] << endl;
	phrase[0] = 'L';
	cout << "Now the first letter is " << phrase[0] << endl;
	for (int i = 0; i < phrase.length(); i++)
	{
		cout << i << " Phrase letter is " << phrase[i] << endl;
	}

	cout << "Now new phrase " << phrase << endl;
	cout <<"The literal \"Over\" locate at position "<< phrase.find("Over") << endl;
	cout <<" New phrase is "<< phrase.erase(4, 5) << endl;;
	cout << "Another phrase is " << phrase.erase(4) << endl;
	phrase.erase();
	if (phrase.empty())
	{
		cout << "\nThere is no phrase"<<endl;
	}
	_getch();
	return 0;
}