/*
Ввод/Вывод
1. Создайте 4 переменные с разными типами данных и предложите пользователю ввести в них значения.
После ввода, отобразите их на экране.
*/
#include "stdafx.h"
#include "iostream"

using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");

	int a = 0;
	char b = 0;
	double c = 0;
	bool t = 0;

	cout << "Введите a: " << endl;
	cin >> a;
	cout << "Введите b: " << endl;
	cin >> b;
	cout << "Введите c: " << endl;
	cin >> c;
	cout << "Введите t: " << endl;
	cin >> t;


	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << t << endl;

}

