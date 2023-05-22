#include "AIPlayer.h"
#include <iostream>
#include <time.h>

void AIPlayer::Turn(int field[][3], int symbolnumber) {
	srand(time(NULL));
	while (true) {
		int row, column;
		row = rand() % 3;
		column = rand() % 3;
		if (field[row][column] == 0) {
			field[row][column] = symbolnumber;
			break;
		}
	}
}
