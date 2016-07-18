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

	char letter1;
	char letter2;
	char letter3;
	char letter4;
	char letter5;

	cout << "Введите слово из 5-ти букв: " << endl;
	cin >> letter1 >> letter2 >> letter3 >> letter4 >> letter5;
	cout << "Вы введи слово: ";
	cout << letter1 << letter2 << letter3 << letter4 << letter5 << endl;

}

