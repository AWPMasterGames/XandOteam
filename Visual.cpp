#include <iostream>
#include <iostream>
#include <time.h>
#include <string>
#include "visual.h"
#include "visualtest.h"

using namespace std;
int a[3][3];
int main()
{
	setlocale(LC_ALL, "Russian");
	
	Visual visual;
	Test test;
	visual.starttext();
	visual.printfield(a);
	test.test3(a);
	visual.printfield(a);
	
}

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
