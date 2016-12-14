#include<conio.h>
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	cout << "You have " << inventory.size() << " items\n";
	cout << "\nYour items: " << endl;
	for (unsigned int i = 0; i < inventory.size(); i++)
	{
		cout << inventory[i] << endl;
	}
	cout << "\nYou trade your sword for a battle axe\n" << endl;
	inventory[0] = "Battle axe";
	cout << "\nYour items: " << endl;
	for (unsigned int i = 0; i < inventory.size(); i++)
	{
		cout << inventory[i] << endl;
	}
	cout << "The item " << inventory[0] << " has " << inventory[0].size()<< " letters"<<endl ;
	cout << "\nYour shield was destroyed at the last battle " << endl;
	inventory.pop_back();
	cout << "\nYour items: " << endl;
	for (unsigned int i = 0; i < inventory.size(); i++)
	{
		cout << inventory[i] << endl;
	}

	cout << "You were robbed of all of your possessions by a thief";
	inventory.clear();
	if (inventory.empty())
	{
		cout << "\nYou have nothing\n";
	}
	else
	{
		cout << "\nYou gave at least one item\n";
	}
	_getch();
	return 0;
}