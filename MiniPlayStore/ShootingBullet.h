#pragma once
#include"ShootingPlayer.h"
class ShootingBullet:public ShootingPlayer
{
public:
	int bullets[20][4];
	int bulletsLife[20];
	int bCounter = 0;

	void drawBullet();
	void eraseBullets();
	void eraseBullet(int a);
	void genBullet();

	void moveBullet();
};

