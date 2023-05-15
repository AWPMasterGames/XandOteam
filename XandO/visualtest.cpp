#include "visualtest.h"

void Test::test1(int a[][3])
{
	for (int j = 0; j < 3; j++) {
		a[0][j] = 2;
	}
}

void Test::test2(int a[][3])
{
	for (int i = 0, j = 0; i < 3 && j < 3; i++, j++) {
		a[i][j] = 3;
	}
}

void Test::test3(int a[][3])
{
	for (int i = 0; i < 3; i++) {
		a[i][0] = 2;
	}
}
