#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	const int ALIEN_POINTS = 150;
	int alienkilled = 10;
	int score = alienkilled * ALIEN_POINTS;
	cout << "score : " << score << endl;
	enum difuclty {
		NOVICE, EASY, NORMAL, HARD, UBETABLE
	};
	difuclty myDifuclty = EASY;
	enum ShipCost
	{
		FIGHTER_COST = 25, BOMBER_COST, LINKOR_COST = 50
	};
	ShipCost myShip = BOMBER_COST;
	cout << "\n To upgrade my ship to a Linkor will cost " << (LINKOR_COST - myShip) << " Points\n";
	_getch();
	return 0;
}