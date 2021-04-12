#pragma once
#include"ShootingManipulation.h"
class RacingPlayer: public ShootingManipulation
{
public:
	char player[3][5] = { ' ',' ','8',' ',' ',
						'|','8','8','8','|',
						'#','#','#','#','#' };
	static int playerPos;

	void drawPlayer();
	void erasePlayer();
};

