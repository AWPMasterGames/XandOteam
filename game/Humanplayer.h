#pragma once
#include "IPlayer.h"
class Humanplayer : public IPlayer {
public:
	void Turn(int field[][3], int symbolnumber);
};
