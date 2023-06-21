#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
#include "SaveLoadEngine.h"
using namespace std;

int main() {
	SaveLoadEngine Lox;
	Lox.LoadFromFile();
	Lox.SaveToFile();
}