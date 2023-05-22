#include "HumanPlayer.h"
#include <iostream>
using namespace std;

void HumanPlayer::Turn(int field[][3], int symbolnumber) {
	while (true) {
		int row, column;
		cout << "Êóäà õîòèòå ïîñòàâèòü ñèìâîë?\n";
		cout << "Ïî ðÿäó: ";
		cin >> row;
		cout << "Ïî ñòîëáöó: ";
		cin >> column;
		if (field[row - 1][column - 1] == 0) {
			field[row - 1][column - 1] = symbolnumber;
			break;
		}
	}
}
