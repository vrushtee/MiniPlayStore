#pragma once
#include"gameSelecAndInstr.h"

class ShootingPlayer:public gameSelecAndInstr
{
public:
	char player[3][5] = { ' ',' ','8',' ',' ',
						'|','8','8','8','|',
						'#','#','#','#','#' };
	static int playerPos;

	void drawPlayer();
	void erasePlayer();
};

