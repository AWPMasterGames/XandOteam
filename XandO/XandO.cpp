#include <iostream>
#include <time.h>
#include "IGame.h"
#include "Iturn.h"
#include "Humanplayer.h"
#include "AIPlayer.h"
using namespace std;

int arr[3][3];

int main() {
	setlocale(LC_ALL, "");
	IGame Gim;
	Gim._select(arr);
}