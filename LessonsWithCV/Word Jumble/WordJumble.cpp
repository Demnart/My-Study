#include<conio.h>
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
	//Инициализация наших слов в двуммерном массиве
	enum fields
	{
		Word,Hint,NUM_FIELDS
	};
	const int NUM_WORDS = 5;
	const string words[NUM_WORDS][NUM_FIELDS] =
	{
		{"wall","Do you feel you're banging your grad againcst something?"},
	    {"glasses","These might help you see the answer"},
		{"labored","Going slowly. is it?"},
		{"persistent","Heep at it"},
		{"jumble","It's what the game is all about"}
	};
	//Посев генератора случайных чисел 
	srand(static_cast <unsigned int>(time(0)));
	int choise = (rand() % NUM_WORDS);
	string theWord = words[choise][Word];
	string theHint = words[choise][Hint];
	//перемещивание символов в строке
	string jumble = theWord;
	int lenght = jumble.size();
	int score = lenght;
	for (int i = 0; i < lenght; i++)
	{
		int index1 = (rand() % lenght);
		int index2 = (rand() % lenght);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}
	//Приглашение игрока
	cout << "\t\t\tWelcome to Word Juble!\n\n";
	cout << "Unscramle the letters to make a word.\n";
	cout << "Enter 'hint' for a hint\n";
	cout << "Enter 'quit' for a quit the game\n";
	cout << "The jumble is : " << jumble;
	string guess;
	cout << "\nYour guess: ";
	cin >> guess;
	
	while ((guess !=theWord)&&(guess!="quit"))
	{
		if (guess == "hint")
		{
			cout << theHint;
			--score;
	}
		else
		{
			cout << "Sorry, that's not it.";
		}
		cout << "\n\nYour guess: ";
		cin >> guess;
	}
	
	
	if (guess == theWord)
	{
		cout << "\nThat's it. You guessed it!\n";
		cout << "Your scoure is " << score;
	}
	cout << "\nThanks for playing\n";
	_getch();
	return 0;


}