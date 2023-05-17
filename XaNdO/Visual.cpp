#include <iostream>
#include <iostream>
#include <time.h>
#include <string>
#include "visual.h"

using namespace std;
void Visual::starttext()
{
	cout << "Какой режим игры хотите выбрать?\n";
	cout << "1 - Игрок против Игрока\n2 - Игрок против ПК\n2 - Пк против Пк\n\n";
}

void Visual::printfield(int a[][3])
{
	for (int j = 0; j < 3; j++) {
		cout << "| ";
		for (int k = 0; k < 3; k++) {
			if (a[j][k] == 2) {
				cout << "X" << " | ";
			}
			else if (a[j][k] == 3)
				cout << "O" << " | ";
			else
				cout << " " << " | ";
		}
		cout << endl;
	}
	cout << "\n\n\n\n\n\n\n\n";
}
