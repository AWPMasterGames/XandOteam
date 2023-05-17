#include <iostream>
#include "Check.h"

using namespace std;
int main()
{
	Check check;
	int arr[3][3];
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			arr[i][j] = 1;
		}
	}

	cout <<	check.checkdraw(arr); 

}



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
					win(2);
				}
			}
			for (int j = 0; j < 3; j++) {
				if (check[i][j] == 3) {
					o++;
				}

				if (o == 3) {
					win(3);
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
					cout << x;
					win(2);
				}
			}
			for (int j = 0; j < 3; j++) {
				if (check[j][i] == 3) {
					o++;
				}

				if (o == 3) {
					cout << o;
					win(3);
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
			for (int i = 0, j = 0; i < 3 && j < 3;i++, j++) {
				if (h == 2) {
					if (check[i][j] == 2) {
						x++;
					}
				}
				if (x == 3) {
					cout << x;
					win(2);
				}
			}
			if (h == 3) {
				for (int i = 0, j = 0; i < 3 && j < 3; i++, j++) {
					if (check[i][j] == 3) {
						o++;
					}

					if (o == 3) {
						cout << o;
						win(3);
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
			for (int i = 2, j = 2; i > -1 && j > -1; i--, j--) {
				if (h == 2) {
					if (check[i][j] == 2) {
						x++;
					}
				}
				if (x == 3) {
					cout << x;
					win(2);
				}
			}
			if (h == 3) {
				for (int i = 2, j = 2; i > -1 && j > -1; i--, j--) {
					if (check[i][j] == 3) {
						o++;
					}

					if (o == 3) {
						cout << o;
						win(3);
					}
				}
			}
		}
	}
}

void Check::win(int vin)
{
	if (vin == 2) {
		cout << "Победил Крестик :3\n";
		//start();
	}
	else if (vin == 3) {
		cout << "Победил Нолик :D\n";
		//start();
	}
}


int Check::checkdraw(int check[][3])
{
	int sum = 0;
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			if (check[i][j] != 0) {
				sum++;
			}
		}
	}
	return sum;

}

void Check::checkwin(int check[][3])
{
	checkvin1(check);
	checkvin2(check);
	checkvin3(check);
	checkvin4(check);

}
