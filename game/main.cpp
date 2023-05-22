#include <iostream>
#include <time.h>
#include "IGame.h"
using namespace std;

int field[3][3];

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "");

	IGame game;
	game.Select(field);
}
