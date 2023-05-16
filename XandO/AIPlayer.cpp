#include "AIPlayer.h"
#include <iostream>

void AITurn::_turn(int arr[][3], int symbolnumber){
	srand(time(NULL));
	arr[rand() % 2][rand() % 2] = symbolnumber;
}
