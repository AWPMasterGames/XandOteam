#pragma once
#include "IPlayer.h"
#include <stdlib.h>
#include <time.h>
class AIPlayer :public IPlayer {
public:
	void Turn(int field[3][3], int symbolnumber);
};