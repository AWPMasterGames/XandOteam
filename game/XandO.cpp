#include <iostream>
#include <time.h>
#include "IGame.h"

using namespace std;

int field[3][3];

int main() {
	setlocale(LC_ALL, "");
	IGame igame;
	igame.Select(field);

}
