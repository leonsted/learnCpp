/*
�������: ������������ ������ ����� �� 1 �� 9999 (����� ������ � ���������). 
���������� ������� �� ����� ������� ��������� ����� � � ����� �������� �������� ������ 
� ���������� ����������. ��������: 7431 � ���� ����� ��������� �������� ���� ������,
2149 � ��� ������ ��� ����� ������ ��������, 15 � ���������� ��������, 3 � ��� �������. 
��� ������� ���� ������ ��� ���������� ����� ��������� �������� % (������� �� �������).
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int sum = 0;

	cout << "������� ����� �� 1 �� 9999" << endl;
	cin >> sum;

	if (sum >= 1 && sum <= 9999)
	{
		cout << "�� ����� ������ �����" << endl;
	}
	else
		cout << "�� ����� �������� �����" << endl;

	if ((sum / 1000) % 10 == 1) cout << "������ ";

	else if ((sum / 1000) % 10 == 2) cout << "��� ������ ";
	else if ((sum / 1000) % 10 == 1) cout << "��� ������ ";
	else if ((sum / 1000) % 10 == 1) cout << "������ ������ ";
	else if ((sum / 1000) % 10 == 1) cout << "���� ����� ";
	else if ((sum / 1000) % 10 == 1) cout << "����� ����� ";
	else if ((sum / 1000) % 10 == 1) cout << "���� ����� ";
	else if ((sum / 1000) % 10 == 1) cout << "������ ����� ";
	else if ((sum / 1000) % 10 == 1) cout << "������ ����� ";

	if ((sum / 100) % 10 == 1) cout << "��� ";

	else if ((sum / 100) % 10 == 2) cout << "������ ";
	else if ((sum / 100) % 10 == 3) cout << "n����� ";
	else if ((sum / 100) % 10 == 4) cout << "��������� ";
	else if ((sum / 100) % 10 == 5) cout << "������� ";
	else if ((sum / 100) % 10 == 6) cout << "�������� ";
	else if ((sum / 100) % 10 == 7) cout << "������� ";
	else if ((sum / 100) % 10 == 8) cout << "��������� ";
	else if ((sum / 100) % 10 == 9) cout << "��������� ";

	if ((sum / 10) % 10 == 1)
	{
		if (sum % 10 == 0) cout << "������ ";

		else if (sum % 10 == 1) cout << "���������� ";
		else if (sum % 10 == 2) cout << "���������� ";
		else if (sum % 10 == 3) cout << "���������� ";
		else if (sum % 10 == 4) cout << "������������ ";
		else if (sum % 10 == 5) cout << "���������� ";
		else if (sum % 10 == 6) cout << "����������� ";
		else if (sum % 10 == 7) cout << "���������� ";
		else if (sum % 10 == 8) cout << "������������ ";
		else if (sum % 10 == 9) cout << "������������";
	}


	if (sum % 10 == 2) cout << "�������� ";

	else if ((sum / 10) % 10 == 3) cout << "�������� ";
	else if ((sum / 10) % 10 == 4) cout << "����� ";
	else if ((sum / 10) % 10 == 5) cout << "��������� ";
	else if ((sum / 10) % 10 == 6) cout << "���������� ";
	else if ((sum / 10) % 10 == 7) cout << "�������� ";
	else if ((sum / 10) % 10 == 8) cout << "����������� ";
	else if ((sum / 10) % 10 == 9) cout << "��������� ";


	if ((sum / 10) % 10 != 1)
	{
		if (sum % 10 == 0) cout << "�������� ";

		else if (sum % 10 == 1) cout << "���� ";
		else if (sum % 10 == 2) cout << "��� ";
		else if (sum % 10 == 3) cout << "��� ";
		else if (sum % 10 == 4) cout << "������ ";
		else if (sum % 10 == 5) cout << "���� ";
		else if (sum % 10 == 6) cout << "����� ";
		else if (sum % 10 == 7) cout << "���� ";
		else if (sum % 10 == 8) cout << "������ ";
		else if (sum % 10 == 9) cout << "������ ";
	}
	cout << endl << endl;
	return 0;
}

