/*
1. Составить расписание на неделю.
Пользователь вводит порядковый номер дня недели и у него на экране отображается,
то, что запланировано на этот день.

Посмотреть код
*/
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int day = 0;
	cout << "Введите день недели: " << endl;
	cin >> day;

	switch (day)
	{
	case 1:
		cout << "Понедельник: \n8:00 Работа \n19:00 Тренировка"<< endl;
		break;
	case 2:
		cout <<  "Вторник: \n8:00 Работа" << endl;
		break;
	case 3:
		cout << "Среда: \n8:00 Работа \n19:00 Бассейн" << endl;
		break;
	case 4:
		cout << "Четверг: \n8:00 Работа \n20:00 ДР друга" << endl;
		break;
	case 5:
		cout <<"Пятница: \n8:00 Работа \n17:00 Тренировка" << endl;
		break;
	case 6:
		cout << "Суббота: \nПикник" << endl;
		break;
	case 7:
		cout << "Воскресенье: \nЧто угодно" << endl;
		break;

	default:
		cout << "нет такого дня" << endl;
		break;
	}


	return 0;
}

