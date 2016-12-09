#include<conio.h>
#include<iostream>
#include<string>

using namespace std;

int main()
{
	const int MAX_ITEMS = 10;
	string inventory[MAX_ITEMS];
	int cell = 0;
	inventory[cell++] = "Sword";
	inventory[cell++] = "Armor";
	inventory[cell++] = "Shield";

	for (int i = 0; i < cell; i++)
	{
		cout << "In " << i+1 << " cell of inventory we have " << inventory[i] << endl;
	}

	cout << "\nYou trade your sword for battle axe\n" << endl;
	inventory[0] = "Battle axe";
	
	for (int i = 0; i < cell; i++)
	{
		cout << "In " << i + 1 << " cell of inventory we have " << inventory[i] << endl;

	}

	cout << "\nThe item Battle axe have " << inventory[0].length() << " letters" << endl;

	cout << "You have find new item healing potion\n" << endl;
	
	if (cell < MAX_ITEMS)//„тобы добавить новый элемент в наш инвентарь,нам необходимо проверить не выходит ли он за пределы массива и только после этого мы можем туда чтото положить
	{
		inventory[cell++] = "Healing potion";
	}
	
	for (int i(0); i < cell; i++)
	{
		cout << "In " << i + 1 << " cell of inventory we have " << inventory[i] << endl;

	}
	_getch();
	return 0;
}