/*
Пользователь вводит порядковый номер пальца руки.
Необходимо показать его название на экран.
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int finger = 0;

	cout << "Введите номер пальца: " << endl;

	cin >> finger;

	if (finger == 1)
	{
		cout << "Большой палец" << endl;
	}
	else if (finger == 2)
		cout << "Уаказательный палец" << endl;
	else
		if (finger == 3)
			cout << "Средний палец" << endl;
		else if (finger == 4)
			cout << "Безымянный палец" << endl;
		else if (finger == 5)
			cout << "Мезинец" << endl;
		else << "Нет пальца " << endl;

	return 0;
}

