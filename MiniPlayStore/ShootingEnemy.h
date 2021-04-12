#pragma once
#include"ShootingBullet.h"
class ShootingEnemy:public ShootingBullet
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

