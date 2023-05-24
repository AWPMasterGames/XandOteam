#include <iostream>
#include "IGame.h"
#include "Humanplayer.h"
#include "AIPlayer.h"
#include "Visual.h"
#include "Check.h"
using namespace std;

void IGame::Select(int field[][3]) {
	Visual visual;
	visual.StartText();
	switch (visual.InpuEngine()) {
	case 1: {
		GamePlayerVsPlayer(field);
		break;
	}
	case 2: {
		GamePlayerVsComputer(field);

		break;
	}
	case 3: {
		GameComputerVsPlayer(field);

		break;
	}
	case 4: {
		GameComputerVsComputer(field);

		break;
	}
	default:
		break;
	}
}

void IGame::GamePlayerVsPlayer(int field[][3]) {
	Visual Field;
	Check checks;
	HumanPlayer first;
	HumanPlayer second;
	Field.PrintField(field);
	while (checks.checkdraw(field) != 9) {
		first.Turn(field, 2);
		Field.PrintField(field);
		checks.checkwin(field);
		second.Turn(field, 3);
		Field.PrintField(field);
		checks.checkwin(field);
	}
}

void IGame::GamePlayerVsComputer(int field[][3]) {
	Visual Field;
	Check checks;
	HumanPlayer first;
	AIPlayer second;
	Field.PrintField(field);
	while (checks.checkdraw(field) != 9) {
		first.Turn(field, 2);
		Field.PrintField(field);
		checks.checkwin(field);
		second.Turn(field, 3);
		Field.PrintField(field);
		checks.checkwin(field);
	}
}

void IGame::GameComputerVsPlayer(int field[][3]) {
	Visual Field;
	Check checks;
	AIPlayer first;
	HumanPlayer second;
	Field.PrintField(field);
	while (checks.checkdraw(field) != 9) {
		first.Turn(field, 2);
		Field.PrintField(field);
		checks.checkwin(field);
		second.Turn(field, 3);
		Field.PrintField(field);
		checks.checkwin(field);
	}
}

void IGame::GameComputerVsComputer(int field[][3]) {
	Visual Field;
	Check checks;
	AIPlayer first;
	AIPlayer second;
	Field.PrintField(field);
	while (checks.checkdraw(field) != 9) {
		first.Turn(field, 2);
		Field.PrintField(field);
		checks.checkwin(field);
		second.Turn(field, 3);
		Field.PrintField(field);
		checks.checkwin(field);
	}
}