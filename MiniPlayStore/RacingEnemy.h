#pragma once
#include"RacingPlayer.h"
class RacingEnemy:public RacingPlayer
{
public:
	int enemyY[6];
	int enemyX[6];
	int enemyFlag[6];

	void genEnemy(int index);
	void drawEnemy(int index);
	void eraseEnemy(int index);
	void resetEnemy(int index);
};

