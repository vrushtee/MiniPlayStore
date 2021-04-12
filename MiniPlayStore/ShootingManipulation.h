#pragma once
#include"ShootingEnemy.h"

class ShootingManipulation :public ShootingEnemy
{
public:
	int score = 0;
	int collision();
	void shootingLevelSelection();
	void levelOne();
	void levelTwo();
	void levelThree();
	void gameOver();
	void updateScore();
	void instructions();
	int hitBullet();
	void lvl2();
	void lvl3();
	void winner();
};

