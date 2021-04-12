#include "ShootingManipulation.h"
#include"ShootingEnemy.h"

ShootingEnemy p;

using namespace std;

int ShootingManipulation::collision()
{
	if (enemyY[0] + 4 >= 43) {
		if (enemyX[0] + 4 - p.playerPos >= 0 && enemyX[0] + 4 - p.playerPos < 8) {
			return 1;
		}
	}
	return 0;
}

void ShootingManipulation::shootingLevelSelection()
{
	do {
		system("cls");
		p.getPosi(10, 5); cout << "  -------------------------- ";//12
		p.getPosi(10, 6); cout << " |        Level Select      | ";
		p.getPosi(10, 7); cout << "  --------------------------";
		p.getPosi(10, 9); cout << "1. Level 1";
		p.getPosi(10, 10); cout << "2. Level 2";
		p.getPosi(10, 11); cout << "3. Level 3";
		p.getPosi(10, 11); cout << "4. Exit";
		p.getPosi(10, 13); cout << "Select option: ";
		char op = _getch();

		if (op == '1') levelOne();
		else if (op == '2') levelTwo();
		else if (op == '3') levelThree();
		else if (op == '4') exit(0);

	} while (1);
}

void ShootingManipulation::levelOne()
{
	enemyFlag[0] = 1;
	enemyFlag[1] = 1;
	enemyY[0] = enemyY[1] = 4;
	genEnemy(0);
	genEnemy(1);

	for (int i = 0; i < 20; i++) {
		bullets[i][0] = bullets[i][1] = 0;
	}


	system("cls");
	p.drawBorder();
	p.getPosi(WIN_WIDTH + 5, 2); cout << "Space Shooter";
	p.getPosi(WIN_WIDTH + 6, 4); cout << "----------";
	p.getPosi(WIN_WIDTH + 6, 6); cout << "----------";
	p.getPosi(WIN_WIDTH + 7, 12); cout << "Control ";
	p.getPosi(WIN_WIDTH + 7, 13); cout << "-------- ";
	p.getPosi(WIN_WIDTH + 2, 14); cout << " A Key - Left";
	p.getPosi(WIN_WIDTH + 2, 15); cout << " D Key - Right";
	p.getPosi(WIN_WIDTH + 2, 16); cout << " Spacebar = Shoot";

	p.getPosi(10, 5); cout << "Press any key to start";
	_getch();
	p.getPosi(10, 5); cout << "                      ";
	while (1)
	{
		if (_kbhit())
		{
			char ch = _getch();
			if (ch == 'a' || ch == 'A')
			{
				if (p.playerPos > 2)
					p.playerPos -= 2;
			}
			if (ch == 'd' || ch == 'D')
			{
				if (p.playerPos < WIN_WIDTH - 7)
					p.playerPos += 2;
			}
			if (ch == 32)
			{
				genBullet();
			}
			if (ch == 27)
			{
				break;
			}
		}
		p.drawPlayer();
		drawEnemy(0);
		drawEnemy(1);

		drawBullet();
		if (collision() == 1) {
			gameOver();

			return;
		}
		if (hitBullet() == 1) {
			score++;
			updateScore();
			if (score == 20)
				lvl2();
		}

		Sleep(200);
		p.erasePlayer();
		eraseEnemy(0);
		eraseEnemy(1);
		eraseBullets();
		moveBullet();
		if (enemyFlag[0] == 1)
			enemyY[0] += 1;

		if (enemyFlag[1] == 1)
			enemyY[1] += 1;

		if (enemyY[0] > SCREEN_HEIGHT - 5)
		{
			resetEnemy(0);
		}
		if (enemyY[1] > SCREEN_HEIGHT - 5)
		{
			resetEnemy(1);
		}
	}


	_getch();

}

void ShootingManipulation::levelTwo()
{
	enemyFlag[0] = 1;
	enemyFlag[1] = 1;
	enemyFlag[2] = 1;
	enemyY[0] = enemyY[1] = enemyY[2] = 4;
	genEnemy(0);
	genEnemy(1);
	genEnemy(2);


	for (int i = 0; i < 20; i++) {
		bullets[i][0] = bullets[i][1] = 0;
	}


	system("cls");
	p.drawBorder();
	p.getPosi(WIN_WIDTH + 5, 2); cout << "Space Shooter";
	p.getPosi(WIN_WIDTH + 6, 4); cout << "----------";
	p.getPosi(WIN_WIDTH + 6, 6); cout << "----------";
	p.getPosi(WIN_WIDTH + 7, 12); cout << "Control ";
	p.getPosi(WIN_WIDTH + 7, 13); cout << "-------- ";
	p.getPosi(WIN_WIDTH + 2, 14); cout << " A Key - Left";
	p.getPosi(WIN_WIDTH + 2, 15); cout << " D Key - Right";
	p.getPosi(WIN_WIDTH + 2, 16); cout << " Spacebar = Shoot";

	p.getPosi(10, 5); cout << "Press any key to start";
	_getch();
	p.getPosi(10, 5); cout << "                      ";
	while (1)
	{
		if (_kbhit())
		{
			char ch = _getch();
			if (ch == 'a' || ch == 'A')
			{
				if (p.playerPos > 2)
					p.playerPos -= 2;
			}
			if (ch == 'd' || ch == 'D')
			{
				if (p.playerPos < WIN_WIDTH - 7)
					p.playerPos += 2;
			}
			if (ch == 32)
			{
				genBullet();
			}
			if (ch == 27)
			{
				break;
			}
		}
		p.drawPlayer();
		drawEnemy(0);
		drawEnemy(1);
		drawEnemy(2);
		drawBullet();
		if (collision() == 1) {
			gameOver();

			return;
		}
		if (hitBullet() == 1) {
			score++;
			updateScore();
			if (score == 40)
				lvl3();
		}

		Sleep(150);
		p.erasePlayer();
		eraseEnemy(0);
		eraseEnemy(1);
		eraseEnemy(2);
		eraseBullets();
		moveBullet();
		if (enemyFlag[0] == 1)
			enemyY[0] += 1;

		if (enemyFlag[1] == 1)
			enemyY[1] += 1;

		if (enemyFlag[2] == 1)
			enemyY[2] += 1;

		if (enemyY[0] > SCREEN_HEIGHT - 5)
		{
			resetEnemy(0);
		}
		if (enemyY[1] > SCREEN_HEIGHT - 5)
		{
			resetEnemy(1);
		}
		if (enemyY[2] > SCREEN_HEIGHT - 5)
		{
			resetEnemy(2);
		}
	}
	_getch();

}

void ShootingManipulation::levelThree()
{
	enemyFlag[0] = 1;
	enemyFlag[1] = 1;
	enemyFlag[2] = 1;
	enemyFlag[3] = 1;
	enemyY[0] = enemyY[1] = enemyY[2] = enemyY[3] = 4;
	genEnemy(0);
	genEnemy(1);
	genEnemy(2);
	genEnemy(3);


	for (int i = 0; i < 20; i++) {
		bullets[i][0] = bullets[i][1] = 0;
	}


	system("cls");
	p.drawBorder();
	p.getPosi(WIN_WIDTH + 5, 2); cout << "Space Shooter";
	p.getPosi(WIN_WIDTH + 6, 4); cout << "----------";
	p.getPosi(WIN_WIDTH + 6, 6); cout << "----------";
	p.getPosi(WIN_WIDTH + 7, 12); cout << "Control ";
	p.getPosi(WIN_WIDTH + 7, 13); cout << "-------- ";
	p.getPosi(WIN_WIDTH + 2, 14); cout << " A Key - Left";
	p.getPosi(WIN_WIDTH + 2, 15); cout << " D Key - Right";
	p.getPosi(WIN_WIDTH + 2, 16); cout << " Spacebar = Shoot";

	p.getPosi(10, 5); cout << "Press any key to start";
	_getch();
	p.getPosi(10, 5); cout << "                      ";
	while (1)
	{
		if (_kbhit())
		{
			char ch = _getch();
			if (ch == 'a' || ch == 'A')
			{
				if (p.playerPos > 2)
					p.playerPos -= 2;
			}
			if (ch == 'd' || ch == 'D')
			{
				if (p.playerPos < WIN_WIDTH - 7)
					p.playerPos += 2;
			}
			if (ch == 32)
			{
				genBullet();
			}
			if (ch == 27)
			{
				break;
			}
		}
		p.drawPlayer();
		drawEnemy(0);
		drawEnemy(1);
		drawEnemy(2);
		drawEnemy(3);
		drawBullet();
		if (collision() == 1) {
			gameOver();

			return;
		}
		if (hitBullet() == 1) {
			score++;
			updateScore();
			if (score == 60)
				winner();
		}

		Sleep(100);
		p.erasePlayer();
		eraseEnemy(0);
		eraseEnemy(1);
		eraseEnemy(2);
		eraseEnemy(3);
		eraseBullets();
		moveBullet();
		if (enemyFlag[0] == 1)
			enemyY[0] += 1;

		if (enemyFlag[1] == 1)
			enemyY[1] += 1;

		if (enemyFlag[2] == 1)
			enemyY[2] += 1;

		if (enemyFlag[3] == 1)
			enemyY[3] += 1;

		if (enemyY[0] > SCREEN_HEIGHT - 5)
		{
			resetEnemy(0);
		}
		if (enemyY[1] > SCREEN_HEIGHT - 5)
		{
			resetEnemy(1);
		}
		if (enemyY[2] > SCREEN_HEIGHT - 5)
		{
			resetEnemy(2);
		}
		if (enemyY[3] > SCREEN_HEIGHT - 5)
		{
			resetEnemy(3);
		}
	}


	_getch();

}

void ShootingManipulation::gameOver()
{
	system("cls");
	cout << endl;
	cout << "\t\t--------------------------" << endl;
	cout << "\t\t-------- Game Over -------" << endl;
	cout << "\t\t--------------------------" << endl << endl;
	cout << "\t\tPress any key to go back to menu.";
	_getch();

}

void ShootingManipulation::updateScore()
{
	p.getPosi(WIN_WIDTH + 7, 5); cout << "Score: " << score << endl;

}

void ShootingManipulation::instructions()
{
	system("cls");
	cout << "Instructions";
	cout << "\n----------------";
	cout << "\n Press spacebar to make player activate";
	cout << "\n\nPress any key to go back to menu";
	_getch();
}

int ShootingManipulation::hitBullet()
{

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 4; j += 2) {
			if (bullets[i][j] != 0) {
				if (bullets[i][j] >= enemyY[0] && bullets[i][j] <= enemyY[0] + 4) {
					if (bullets[i][j + 1] >= enemyX[0] && bullets[i][j + 1] <= enemyX[0] + 4) {
						eraseBullet(i);
						bullets[i][j] = 0;
						resetEnemy(0);
						return 1;
					}
				}
				if (bullets[i][j] >= enemyY[1] && bullets[i][j] <= enemyY[1] + 4) {
					if (bullets[i][j + 1] >= enemyX[1] && bullets[i][j + 1] <= enemyX[1] + 4) {
						eraseBullet(i);
						resetEnemy(1);
						bullets[i][j] = 0;
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void ShootingManipulation::lvl2()
{
	system("cls");
	p.getPosi(10, 5); cout << " -------------------------------- ";
	p.getPosi(10, 6); cout << " |      Welcome to level 2      | ";
	p.getPosi(10, 7); cout << " -------------------------------- ";
	p.getPosi(10, 10); cout << " press any key to continue ";

	system("PAUSE");
	system("cls");
	score = 0;
	Sleep(50);
	levelThree();



}

void ShootingManipulation::lvl3()
{
	system("cls");
	p.getPosi(10, 5); cout << "  -------------------------------- ";
	p.getPosi(10, 6); cout << " |      Welcome to level 3        | ";
	p.getPosi(10, 7); cout << "  -------------------------------- ";
	p.getPosi(10, 10); cout << " press any key to continue ";

	system("PAUSE");
	system("cls");
	score = 0;
	Sleep(50);
	winner();



}

void ShootingManipulation::winner()
{
	system("cls");
	p.getPosi(10, 5); cout << "  -------------------------------- ";
	p.getPosi(10, 6); cout << " |  Congratulations, You Won!!!   | ";
	p.getPosi(10, 7); cout << "  -------------------------------- ";
	system("PAUSE");
	system("cls");
	score = 0;
	Sleep(50);



}

