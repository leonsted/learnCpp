/*
1. ��������� ���������� �� ������.
������������ ������ ���������� ����� ��� ������ � � ���� �� ������ ������������,
��, ��� ������������� �� ���� ����.

���������� ���
*/
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int day = 0;
	cout << "������� ���� ������: " << endl;
	cin >> day;

	switch (day)
	{
	case 1:
		cout << "�����������: \n8:00 ������ \n19:00 ����������"<< endl;
		break;
	case 2:
		cout <<  "�������: \n8:00 ������" << endl;
		break;
	case 3:
		cout << "�����: \n8:00 ������ \n19:00 �������" << endl;
		break;
	case 4:
		cout << "�������: \n8:00 ������ \n20:00 �� �����" << endl;
		break;
	case 5:
		cout <<"�������: \n8:00 ������ \n17:00 ����������" << endl;
		break;
	case 6:
		cout << "�������: \n������" << endl;
		break;
	case 7:
		cout << "�����������: \n��� ������" << endl;
		break;

	default:
		cout << "��� ������ ���" << endl;
		break;
	}


	return 0;
}

