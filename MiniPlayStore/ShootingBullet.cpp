#include "ShootingBullet.h"
#include"ShootingPlayer.h"
#include<iostream>
#include<conio.h>

ShootingPlayer p;

using namespace std;

void ShootingBullet::drawBullet()
{
	for (int i = 0; i < 20; i++) {
		if (bullets[i][0] > 1) {
			p.getPosi(bullets[i][1], bullets[i][0]); cout << ".";
			p.getPosi(bullets[i][3], bullets[i][2]); cout << ".";
		}
	}

}

void ShootingBullet::eraseBullets()
{
	for (int i = 0; i < 20; i++) {
		if (bullets[i][0] > 1) {
			p.getPosi(bullets[i][1], bullets[i][0]); cout << " ";
			p.getPosi(bullets[i][3], bullets[i][2]); cout << " ";
		}
	}

}

void ShootingBullet::eraseBullet(int a)
{
	p.getPosi(bullets[a][1], bullets[a][0]); cout << " ";
	p.getPosi(bullets[a][3], bullets[a][2]); cout << " ";
}

void ShootingBullet::genBullet()
{
	bullets[bCounter][0] = 43;
	bullets[bCounter][1] = p.playerPos;
	bullets[bCounter][2] = 43;
	bullets[bCounter][3] = p.playerPos + 4;
	bCounter++;
	if (bCounter == 20)
		bCounter = 0;


}

void ShootingBullet::moveBullet()
{
	for (int i = 0; i < 20; i++) {
		if (bullets[i][0] > 2)
			bullets[i][0]--;
		else
			bullets[i][0] = 0;

		if (bullets[i][2] > 2)
			bullets[i][2]--;
		else
			bullets[i][2] = 0;
	}
}
