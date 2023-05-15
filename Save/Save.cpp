
#include "Save.h"
void Save::saveFile(int a[][3], int hod)
{
	doh = hod;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			b[i][j] = a[i][j];
		}
	}
}

void Save::outFile(int a[][3], int hod)
{
	hod = doh;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			a[i][j] = b[i][j];
		}
	}
}
