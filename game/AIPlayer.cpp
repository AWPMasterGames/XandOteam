#include "AIPlayer.h"
#include <iostream>
#include <time.h>

void AIPlayer::_turn(int arr[][3], int symbolnumber) {
	srand(time(NULL));
	while (true) {
		int row, column;
		row = rand() % 3;
		column = rand() % 3;
		if (arr[row][column] == 0) {
			arr[row][column] = symbolnumber;
			break;
		}
	}
}
