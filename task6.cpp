/*
����/�����
2. �������� 5 ���������� ���� char,
����������  ������������ ������ ����� �� ���� ���� � �������� ��� ������� (�����)
�� �����. (������� ������� ���������, �.�. �������� ����� ������������ �����������.

*/
#include "stdafx.h"
#include "iostream"

using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");

	double num1 = 0;
	double num2 = 0;

	cout << "������� ������ �����: " << endl;
	cin >> num1;
	cout << "������� ������ �����: " << endl;
	cin >> num2;

	cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;


	cout << "������ ��������������: ";
	cout << num1 << " + " << num2 << "/" << 2 << endl;
	cout << (num1 + num2) / 2 << endl;

	cout << endl;

}

