#include <iostream>
#include <iostream>
#include <time.h>
#include <string>
#include "Visual.h"

using namespace std;

void Visual::StartText()
{
	cout << "����� ������ ������� ����� ����?\n";
	cout << "1 - ����� ������ ������\n2 - ����� ������ ��\n3 - �� ������ ������\n4 - �� ������ ��\n";
}

int Visual::InpuEngine()
{
	int input;
	cin >> input;
	return input;
}

void Visual::PrintField(int field[][3])
{
	for (int j = 0; j < 3; j++) {
		cout << "| ";
		for (int k = 0; k < 3; k++) {
			if (field[j][k] == 2) {
				cout << "X" << " | ";
			}
			else if (field[j][k] == 3)
				cout << "O" << " | ";
			else
				cout << " " << " | ";
		}
		cout << endl;
	}
	cout << "\n\n";
}