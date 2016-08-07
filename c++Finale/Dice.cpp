#include "stdafx.h"
#include "Dice.h"
#include <iostream>
using namespace std;

Dice::Dice()
{
}


Dice::~Dice()
{
}

//roll the dice to determine the success or failure of the choice
int RollDice()
{
	return rand() % 6 + 1;
}
