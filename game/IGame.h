#pragma once

class IGame {
public:
	void Select(int field[][3]);
	void GamePlayerVsPlayer(int field[][3]);
	void GamePlayerVsPlayer(int field[][3]);
	void GameComputerVsPlayer(int field[][3]);
	void GameComputerVsComputer(int field[][3]);
};