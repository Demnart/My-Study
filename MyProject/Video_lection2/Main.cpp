﻿#include<iostream>
#include<conio.h>

using std::cout;
using std::cin;
using std::endl;

int main() {
	setlocale(LC_ALL, "Russian");
	// Инициализация переменных
	int apple;
	int carrots;
	int potaetoes;
	double money;
	char simbol;
	// Присваивание переменным значений
	apple = 3;
	carrots = 7;
	potaetoes = 15;
	money = 17.85;
	simbol = 'x';

	cout << "Apples =  " << apple << endl;
	cout << "Carrots = " << carrots << endl;
	cout << "Potaetoes = " << potaetoes << endl;
	cout << "ПРиивеееет\n";
	cout << "Введите количество яблок ";
	cin >> apple;
	cout << "Нынешнее кол-во яблок : " << apple << endl;

	_getch();
	
	return 0;
}