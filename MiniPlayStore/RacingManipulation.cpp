#include "RacingManipulation.h"
#include"RacingEnemy.h"

RacingEnemy p;

using namespace std;

int RacingManipulation::collision()
{
	if (p.enemyY[0] + 4 >= 43) {
		if (p.enemyX[0] + 4 - p.playerPos >= 0 && p.enemyX[0] + 4 - p.playerPos < 8) {
			return 1;
		}
	}
	return 0;
}

void RacingManipulation::racingLevelSelection()
{
	do {
		system("cls");
		p.getPosi(10, 5); cout << "  -------------------------- ";//12
		p.getPosi(10, 6); cout << " |        Level Select      | ";
		p.getPosi(10, 7); cout << "  --------------------------";
		p.getPosi(10, 9); cout << "1. Level 1";
		p.getPosi(10, 10); cout << "2. Level 2";
		p.getPosi(10, 11); cout << "3. Level 3";
		p.getPosi(10, 12); cout << "4. Exit";
		p.getPosi(10, 13); cout << "Select option: ";
		char op = _getch();

		if (op == '1') levelOne();
		else if (op == '2') levelTwo();
		else if (op == '3') levelThree();
		else if (op == '4') exit(0);

	} while (1);
}

void RacingManipulation::levelOne()
{
	p.enemyFlag[0] = 1;
	p.enemyFlag[1] = 1;
	p.enemyY[0] = p.enemyY[1] = 4;
	p.genEnemy(0);
	p.genEnemy(1);

	system("cls");
	p.drawBorder();
	p.getPosi(WIN_WIDTH + 5, 2); cout << "Space Shooter";
	p.getPosi(WIN_WIDTH + 6, 4); cout << "----------";
	p.getPosi(WIN_WIDTH + 6, 6); cout << "----------";
	p.getPosi(WIN_WIDTH + 7, 12); cout << "Control ";
	p.getPosi(WIN_WIDTH + 7, 13); cout << "-------- ";
	p.getPosi(WIN_WIDTH + 2, 14); cout << " A Key - Left";
	p.getPosi(WIN_WIDTH + 2, 15); cout << " D Key - Right";
	p.getPosi(WIN_WIDTH + 2, 16); cout << " Q/q= Quit";

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
			if (ch == 'q' || ch == 'Q')
			{
				p.CarRacing();
			}
			if (ch == 27)
			{
				break;
			}
		}
		p.drawPlayer();
		p.drawEnemy(0);
		p.drawEnemy(1);
		if (collision() == 1) {
			gameOver();

			return;
		}
		Sleep(200);
		p.erasePlayer();
		p.eraseEnemy(0);
		p.eraseEnemy(1);
		if (p.enemyFlag[0] == 1)
			p.enemyY[0] += 1;

		if (p.enemyFlag[1] == 1)
			p.enemyY[1] += 1;

		if (p.enemyY[0] > SCREEN_HEIGHT - 5)
		{
			p.resetEnemy(0);
		}
		if (p.enemyY[1] > SCREEN_HEIGHT - 5)
		{
			p.resetEnemy(1);
		}
	}


	_getch();

}

void RacingManipulation::levelTwo()
{
	p.enemyFlag[0] = 1;
	p.enemyFlag[1] = 1;
	p.enemyFlag[2] = 1;
	p.enemyY[0] = p.enemyY[1] = p.enemyY[2] = 4;
	p.genEnemy(0);
	p.genEnemy(1);
	p.genEnemy(2);

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
			if (ch == 27)
			{
				break;
			}
		}
		p.drawPlayer();
		p.drawEnemy(0);
		p.drawEnemy(1);
		p.drawEnemy(2);
		if (collision() == 1) 
		{
			gameOver();

			return;
		}
		Sleep(150);
		p.erasePlayer();
		p.eraseEnemy(0);
		p.eraseEnemy(1);
		p.eraseEnemy(2);
		if (p.enemyFlag[0] == 1)
			p.enemyY[0] += 1;

		if (p.enemyFlag[1] == 1)
			p.enemyY[1] += 1;

		if (p.enemyFlag[2] == 1)
			p.enemyY[2] += 1;

		if (p.enemyY[0] > SCREEN_HEIGHT - 5)
		{
			p.resetEnemy(0);
		}
		if (p.enemyY[1] > SCREEN_HEIGHT - 5)
		{
			p.resetEnemy(1);
		}
		if (p.enemyY[2] > SCREEN_HEIGHT - 5)
		{
			p.resetEnemy(2);
		}
	}
	_getch();

}

void RacingManipulation::levelThree()
{
	p.enemyFlag[0] = 1;
	p.enemyFlag[1] = 1;
	p.enemyFlag[2] = 1;
	p.enemyFlag[3] = 1;
	p.enemyY[0] = p.enemyY[1] = p.enemyY[2] = p.enemyY[3] = 4;
	p.genEnemy(0);
	p.genEnemy(1);
	p.genEnemy(2);
	p.genEnemy(3);

	system("cls");
	p.drawBorder();
	p.getPosi(WIN_WIDTH + 5, 2); cout << "Space Shooter";
	p.getPosi(WIN_WIDTH + 6, 4); cout << "----------";
	p.getPosi(WIN_WIDTH + 6, 6); cout << "----------";
	p.getPosi(WIN_WIDTH + 7, 12); cout << "Control ";
	p.getPosi(WIN_WIDTH + 7, 13); cout << "-------- ";
	p.getPosi(WIN_WIDTH + 2, 14); cout << " A Key - Left";
	p.getPosi(WIN_WIDTH + 2, 15); cout << " D Key - Right";
	p.getPosi(WIN_WIDTH + 2, 16); cout << " Q/q= Quit";

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

			if (ch == 27)
			{
				break;
			}
		}
		p.drawPlayer();
		p.drawEnemy(0);
		p.drawEnemy(1);
		p.drawEnemy(2);
		p.drawEnemy(3);
		if (collision() == 1) {
			gameOver();

			return;
		}
		Sleep(100);
		p.erasePlayer();
		p.eraseEnemy(0);
		p.eraseEnemy(1);
		p.eraseEnemy(2);
		p.eraseEnemy(3);
		if (p.enemyFlag[0] == 1)
			p.enemyY[0] += 1;

		if (p.enemyFlag[1] == 1)
			p.enemyY[1] += 1;

		if (p.enemyFlag[2] == 1)
			p.enemyY[2] += 1;

		if (p.enemyFlag[3] == 1)
			p.enemyY[3] += 1;

		if (p.enemyY[0] > SCREEN_HEIGHT - 5)
		{
			p.resetEnemy(0);
		}
		if (p.enemyY[1] > SCREEN_HEIGHT - 5)
		{
			p.resetEnemy(1);
		}
		if (p.enemyY[2] > SCREEN_HEIGHT - 5)
		{
			p.resetEnemy(2);
		}
		if (p.enemyY[3] > SCREEN_HEIGHT - 5)
		{
			p.resetEnemy(3);
		}
	}


	_getch();

}

void RacingManipulation::gameOver()
{
	system("cls");
	cout << endl;
	cout << "\t\t--------------------------" << endl;
	cout << "\t\t-------- Game Over -------" << endl;
	cout << "\t\t--------------------------" << endl << endl;
	cout << "\t\tPress any key to go back to menu.";
	_getch();

}

void RacingManipulation::updateScore()
{
	p.getPosi(WIN_WIDTH + 7, 5); cout << "Score: " << score << endl;

}

void RacingManipulation::instructions()
{
	system("cls");
	cout << "Instructions";
	cout << "\n----------------";
	cout << "\n Press spacebar to make player activate";
	cout << "\n\nPress any key to go back to menu";
	_getch();
}

void RacingManipulation::lvl2()
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

void RacingManipulation::lvl3()
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

void RacingManipulation::winner()
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


