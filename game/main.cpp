#include <iostream>
#include <time.h>
#include "IGame.h"
using namespace std;

int arr[3][3];

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "");

	IGame game;
	game._select(arr);
}