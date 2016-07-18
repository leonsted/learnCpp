/*
1. Распространённая задача:  Дано четырехзначное число (к примеру 5678),
вывести на экран  в обратном порядке цифры из которых это число состоит.
То есть мы должны увидеть на экране 8765. Подсказка:
чтобы взять из числа отдельные цифры,
надо применять  деление по модулю на 10.

*/
#include "stdafx.h"
#include "iostream"

using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");

	int num = 2465;
	cout << "Целое число: " << num << endl;
	cout << "Число на оборот: ";

	cout << num % 10;
	num /= 10;

	cout << num % 10;
	num /= 10;
	cout << num % 10;
	num /= 10;
	cout << num % 10;
	num /= 10;

	cout << endl << endl;

	return 0;






}

