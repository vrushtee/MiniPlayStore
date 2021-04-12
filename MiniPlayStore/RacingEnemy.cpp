#include "RacingEnemy.h"
#include"RacingPlayer.h"

RacingPlayer p;
using namespace std;

void RacingEnemy::genEnemy(int index)
{
	enemyX[index] = 3 + rand() % (WIN_WIDTH - 10);

}

void RacingEnemy::drawEnemy(int index)
{
	if (enemyFlag[index] == true) {
		p.getPosi(enemyX[index], enemyY[index]);   cout << ".&&.";
		p.getPosi(enemyX[index], enemyY[index] + 1); cout << "9999";
		p.getPosi(enemyX[index], enemyY[index] + 2); cout << "****";
		p.getPosi(enemyX[index], enemyY[index] + 3); cout << ".&&.";

	}

}

void RacingEnemy::eraseEnemy(int index)
{
	if (enemyFlag[index] == true) {
		p.getPosi(enemyX[index], enemyY[index]);   cout << "    ";
		p.getPosi(enemyX[index], enemyY[index] + 1); cout << "    ";
		p.getPosi(enemyX[index], enemyY[index] + 2); cout << "    ";
		p.getPosi(enemyX[index], enemyY[index] + 3); cout << "    ";

	}
}

void RacingEnemy::resetEnemy(int index)
{
	eraseEnemy(index);
	enemyY[index] = 6;
	genEnemy(index);
}

