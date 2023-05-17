#pragma once
#include "Iturn.h"
#include <stdlib.h>
#include <time.h>
class AIPlayer :public Iturn {
public:
	void _turn(int arr[][3], int symbolnumber);
};
