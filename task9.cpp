/*
«адание: ѕользователь вводит число от 1 до 9999 (сумму выдачи в банкомате). 
Ќеобходимо вывести на экран словами введенную сумму и в конце написать название валюты 
с правильным окончанием. Ќапример: 7431 Ч семь тыс€ч четыреста тридцать один доллар,
2149 Ч две тыс€чи сто сорок дев€ть долларов, 15 Ч п€тнадцать долларов, 3 Ч три доллара. 
ƒл€ решени€ этой задачи вам необходимо будет примен€ть оператор % (остаток от делени€).
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int sum = 0;

	cout << "¬ведите сумму от 1 до 9999" << endl;
	cin >> sum;

	if (sum >= 1 && sum <= 9999)
	{
		cout << "¬ы ввели верную сумму" << endl;
	}
	else
		cout << "¬ы ввели неверную сумму" << endl;

	if ((sum / 1000) % 10 == 1) cout << "тыс€ча ";

	else if ((sum / 1000) % 10 == 2) cout << "две тыс€чи ";
	else if ((sum / 1000) % 10 == 1) cout << "“ри тыс€чи ";
	else if ((sum / 1000) % 10 == 1) cout << "четыри тыс€чи ";
	else if ((sum / 1000) % 10 == 1) cout << "п€ть тыс€ч ";
	else if ((sum / 1000) % 10 == 1) cout << "шесть тыс€ч ";
	else if ((sum / 1000) % 10 == 1) cout << "семь тыс€ч ";
	else if ((sum / 1000) % 10 == 1) cout << "восемь тыс€ч ";
	else if ((sum / 1000) % 10 == 1) cout << "дев€ть тыс€ч ";

	if ((sum / 100) % 10 == 1) cout << "сто ";

	else if ((sum / 100) % 10 == 2) cout << "двести ";
	else if ((sum / 100) % 10 == 3) cout << "nриста ";
	else if ((sum / 100) % 10 == 4) cout << "четыриста ";
	else if ((sum / 100) % 10 == 5) cout << "п€тьсот ";
	else if ((sum / 100) % 10 == 6) cout << "шестьсот ";
	else if ((sum / 100) % 10 == 7) cout << "семьсот ";
	else if ((sum / 100) % 10 == 8) cout << "восемьсот ";
	else if ((sum / 100) % 10 == 9) cout << "дев€тьсот ";

	if ((sum / 10) % 10 == 1)
	{
		if (sum % 10 == 0) cout << "дес€ть ";

		else if (sum % 10 == 1) cout << "ќдинадцать ";
		else if (sum % 10 == 2) cout << "двенадцать ";
		else if (sum % 10 == 3) cout << "тринадцать ";
		else if (sum % 10 == 4) cout << "четырнадцать ";
		else if (sum % 10 == 5) cout << "п€тнадцать ";
		else if (sum % 10 == 6) cout << "шестнадцать ";
		else if (sum % 10 == 7) cout << "семнадцать ";
		else if (sum % 10 == 8) cout << "восемнадцать ";
		else if (sum % 10 == 9) cout << "дев€тнадцать";
	}


	if (sum % 10 == 2) cout << "двадцать ";

	else if ((sum / 10) % 10 == 3) cout << "тридцать ";
	else if ((sum / 10) % 10 == 4) cout << "сорок ";
	else if ((sum / 10) % 10 == 5) cout << "п€тьдес€т ";
	else if ((sum / 10) % 10 == 6) cout << "шестьдес€т ";
	else if ((sum / 10) % 10 == 7) cout << "семдес€т ";
	else if ((sum / 10) % 10 == 8) cout << "восемьдес€т ";
	else if ((sum / 10) % 10 == 9) cout << "дев€носто ";


	if ((sum / 10) % 10 != 1)
	{
		if (sum % 10 == 0) cout << "долларов ";

		else if (sum % 10 == 1) cout << "один ";
		else if (sum % 10 == 2) cout << "два ";
		else if (sum % 10 == 3) cout << "три ";
		else if (sum % 10 == 4) cout << "четыри ";
		else if (sum % 10 == 5) cout << "п€ть ";
		else if (sum % 10 == 6) cout << "шесть ";
		else if (sum % 10 == 7) cout << "семь ";
		else if (sum % 10 == 8) cout << "восемь ";
		else if (sum % 10 == 9) cout << "дев€ть ";
	}
	cout << endl << endl;
	return 0;
}

