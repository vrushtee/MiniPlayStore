#include "RacingPlayer.h"
#include "ShootingPlayer.h"

using namespace std;

int RacingPlayer::playerPos = WIN_WIDTH / 3;

void RacingPlayer::drawPlayer()
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			getPosi(j + playerPos, i + 43); cout << player[i][j];
		}
	}
}

void RacingPlayer::erasePlayer()
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			getPosi(j + playerPos, i + 43); cout << " ";
		}
	}

}

