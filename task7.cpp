/*
1. ��������������� ������:  ���� �������������� ����� (� ������� 5678),
������� �� �����  � �������� ������� ����� �� ������� ��� ����� �������.
�� ���� �� ������ ������� �� ������ 8765. ���������:
����� ����� �� ����� ��������� �����,
���� ���������  ������� �� ������ �� 10.

*/
#include "stdafx.h"
#include "iostream"

using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");

	int num = 2465;
	cout << "����� �����: " << num << endl;
	cout << "����� �� ������: ";

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

