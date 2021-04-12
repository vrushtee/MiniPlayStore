#pragma once
#include"Draw.h"
class TicTacToe:public Draw
{
public:
	char plyrName;
	int rounds;
	int rnd;
	int plyrScore = 0;
	int compScore = 0;
	int plyrChoice;
	int compChoice;
	int levelChoice;
	void TicTacToelevelSelection();
	void levelOne();
	void levelTwo();
	void levelThree();
};

