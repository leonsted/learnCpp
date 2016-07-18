/*
2. Объявить три переменные типа int и присвоить первой числовое значение, 
вторая переменная равна первой переменной увеличенной на 3, а третья переменная равна сумме первых двух.
*/
#include "stdafx.h"
#include "iostream"

using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");

	int a = 5;
	int b = a + 3;
	int c = a + b;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
 
}

