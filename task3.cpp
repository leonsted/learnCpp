/*
3. �������� ����������, ��� �������� ������ ���������� ��������� ��� ���������� �����.
�������� �����, ����� �� ���������� ������ � �����.
*/
#include "stdafx.h"
#include "iostream"

using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");

	int cups = 6;
	int spoon = cups;
	int saucers = cups;

	int amount = cups + spoon + saucers;

	cout << "����� ���������� ��������: " << endl;
	cout << amount << endl;

}

