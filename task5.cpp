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

	char letter1;
	char letter2;
	char letter3;
	char letter4;
	char letter5;

	cout << "������� ����� �� 5-�� ����: " << endl;
	cin >> letter1 >> letter2 >> letter3 >> letter4 >> letter5;
	cout << "�� ����� �����: ";
	cout << letter1 << letter2 << letter3 << letter4 << letter5 << endl;

}

