/*
������������ ������ ���������� ����� ������ ����.
���������� �������� ��� �������� �� �����.
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int finger = 0;

	cout << "������� ����� ������: " << endl;

	cin >> finger;

	if (finger == 1)
	{
		cout << "������� �����" << endl;
	}
	else if (finger == 2)
		cout << "������������� �����" << endl;
	else
		if (finger == 3)
			cout << "������� �����" << endl;
		else if (finger == 4)
			cout << "���������� �����" << endl;
		else if (finger == 5)
			cout << "�������" << endl;
		else << "��� ������ " << endl;

	return 0;
}

