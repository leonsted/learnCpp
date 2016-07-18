/*
3. Объявить переменные, для подсчета общего количества предметов для сервировки стола.
Например чашки, такое же количество блюдец и ложек.
*/
#include "stdafx.h"
#include "iostream"

using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");

	int cups = 6;
	int spoon = cups;
	int saucers = cups;

	int amount = cups + spoon + saucers;

	cout << "Общее количество приборов: " << endl;
	cout << amount << endl;

}

