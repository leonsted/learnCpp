/*
Ввод/Вывод
2. Создайте 5 переменных типа char,
предложите  пользователю ввести слово из пяти букв и покажите эти символы (слово)
на экран. (Символы вводить латиницей, т.к. кирилица будет отображаться некорректно.

*/
#include "stdafx.h"
#include "iostream"

using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");

	double num1 = 0;
	double num2 = 0;

	cout << "Введите первое число: " << endl;
	cin >> num1;
	cout << "Введите второе число: " << endl;
	cin >> num2;

	cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;


	cout << "Средне арифметическое: ";
	cout << num1 << " + " << num2 << "/" << 2 << endl;
	cout << (num1 + num2) / 2 << endl;

	cout << endl;

}

