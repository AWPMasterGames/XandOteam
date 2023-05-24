#include "Check.h"
#include "IGame.h"
using namespace std;

void Check::checkvin1(int check[][3])
{
	for (int h = 2; h != 3; h++) {
		for (int i = 0; i < 3; i++) {
			int x = 0;
			int o = 0;
			for (int j = 0; j < 3; j++) {
				if (h == 2) {
					if (check[i][j] == 2) {
						x++;
					}
				}
				if (x == 3) {
					win(2, check);
				}
			}
			for (int j = 0; j < 3; j++) {
				if (check[i][j] == 3) {
					o++;
				}

				if (o == 3) {
					win(3, check);
				}
			}
		}
	}
}

void Check::checkvin2(int check[][3])
{
	for (int h = 2; h != 3; h++) {
		for (int i = 0; i < 3; i++) {
			int x = 0;
			int o = 0;
			for (int j = 0; j < 3; j++) {
				if (h == 2) {
					if (check[j][i] == 2) {
						x++;
					}
				}
				if (x == 3) {
					win(2, check);
				}
			}
			for (int j = 0; j < 3; j++) {
				if (check[j][i] == 3) {
					o++;
				}

				if (o == 3) {
					win(3, check);
				}
			}
		}
	}
}

void Check::checkvin3(int check[][3])
{
	for (int h = 2; h != 4; h++) {
		for (int g = 0; g < 3; g++) {
			int x = 0;
			int o = 0;
			for (int i = 0, j = 0; i < 3 && j < 3; i++, j++) {
				if (h == 2) {
					if (check[i][j] == 2) {
						x++;
					}
				}
				if (x == 3) {
					win(2, check);
				}
			}
			if (h == 3) {
				for (int i = 0, j = 0; i < 3 && j < 3; i++, j++) {
					if (check[i][j] == 3) {
						o++;
					}

					if (o == 3) {
						win(3, check);
					}
				}
			}
		}
	}
}

void Check::checkvin4(int check[][3])
{
	for (int h = 2; h != 4; h++) {
		for (int g = 0; g < 3; g++) {
			int x = 0;
			int o = 0;
			for (int i = 2, j = 0; i > -1 && j < 3; i--, j++) {
				if (h == 2) {
					if (check[i][j] == 2) {
						x++;
					}
				}
				if (x == 3) {
					win(2, check);
				}
			}
			if (h == 3) {
				for (int i = 2, j = 0; i > -1 && j < 3; i--, j++) {
					if (check[i][j] == 3) {
						o++;
					}

					if (o == 3) {
						win(3, check);
					}
				}
			}
		}
	}
}


void Check::win(int vin, int field[][3])
{
	if (vin == 2) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				field[i][j] = 0;
			}
		}
		cout << "Победил крестик :3\n";
		IGame Gim;
		Gim.Select(field);
	}
	else if (vin == 3) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				field[i][j] = 0;
			}
		}
		cout << "Победила дырка от бублика :D\n";
		IGame Gim;
		Gim.Select(field);
	}
}


int Check::checkdraw(int check[][3])
{
	IGame sim;
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (check[i][j] != 0) {
				sum++;
			}
		}
	}
	if (sum == 9) {
		cout << "Ничья\n";
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				check[i][j] = 0;
			}
		}
		sim.Select(check);
	}
	return sum;
}

void Check::checkwin(int check[][3])
{
	checkvin1(check);
	checkvin2(check);
	checkvin3(check);
	checkvin4(check);
	checkdraw(check);

}
