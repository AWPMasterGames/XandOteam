#pragma once
#include <iostream>
#include <time.h>
#include <string>

class Check
{
	void checkvin1(int check[][3]);
	void checkvin2(int check[][3]);
	void checkvin3(int check[][3]);
	void checkvin4(int check[][3]);
	void win(int vin, int arr[][3]);
public:
	int checkdraw(int check[][3]);
	void checkwin(int check[][3]);
};