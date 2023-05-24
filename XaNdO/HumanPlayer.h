#pragma once
#include "IPlayer.h"
class HumanPlayer : public IPlayer {
public:
	void Turn(int field[][3], int symbolnumber);
};