#include "gameSelecAndInstr.h"
#include"Draw.h"
#include "Snake.h"
#include "TicTacToe.h"
#include"ShootingManipulation.h"
#include"RacingManipulation.h"
#include <iostream>
#include<conio.h>

Draw p;
RacingManipulation r;
ShootingManipulation m;
Snake s;
TicTacToe t;

using namespace std;

void gameSelecAndInstr::CarRacing()
{
	do {
		system("cls");
		p.getPosi(10, 5); cout << "  -------------------------- ";//12
		p.getPosi(10, 6); cout << " |      CAR RACING          | ";
		p.getPosi(10, 7); cout << "  --------------------------";
		p.getPosi(10, 9); cout << "1. Start Game";
		p.getPosi(10, 10); cout << "2. Read  Instructions";
		p.getPosi(10, 11); cout << "3. Quit";
		p.getPosi(10, 13); cout << "Select option: ";
		char op = _getch();

		if (op == '1') r.racingLevelSelection();
		else if (op == '2') Instruction();
		else if (op == '3') exit(0);

	} while (1);
}

void gameSelecAndInstr::Shooting()
{
	do {
		system("cls");
		p.getPosi(10, 5); cout << "  -------------------------- ";//12
		p.getPosi(10, 6); cout << " |         Shooting         | ";
		p.getPosi(10, 7); cout << "  --------------------------";
		p.getPosi(10, 9); cout << "1. Start Game";
		p.getPosi(10, 10); cout << "2. Read  Instructions";
		p.getPosi(10, 11); cout << "3. Quit";
		p.getPosi(10, 13); cout << "Select option: ";
		char op = _getch();

		if (op == '1') m.shootingLevelSelection();
		else if (op == '2') Instruction();
		else if (op == '3') exit(0);

	} while (1);
}

void gameSelecAndInstr::Snake()
{
	do 
	{
		system("cls");
		p.getPosi(10, 5); cout << "  -------------------------- ";//12
		p.getPosi(10, 6); cout << " |          Snake           | ";
		p.getPosi(10, 7); cout << "  --------------------------";
		p.getPosi(10, 9); cout << "1. Start Game";
		p.getPosi(10, 10); cout << "2. Read  Instructions";
		p.getPosi(10, 11); cout << "3. Quit";
		p.getPosi(10, 13); cout << "Select option: ";
		char op = _getch();

		if (op == '1') s.snake();
		else if (op == '2') Instruction();
		else if (op == '3') exit(0);

	} while (1);
}

void gameSelecAndInstr::TicTacToe()
{
	do 
	{
		system("cls");
		p.getPosi(10, 5); cout << "  -------------------------- ";//12
		p.getPosi(10, 6); cout << " |        TicTacToe         | ";
		p.getPosi(10, 7); cout << "  --------------------------";
		p.getPosi(10, 9); cout << "1. Start Game";
		p.getPosi(10, 10); cout << "2. Read  Instructions";
		p.getPosi(10, 11); cout << "3. Quit";
		p.getPosi(10, 13); cout << "Select option: ";
		char op = _getch();

		if (op == '1') t.TicTacToelevelSelection();
		else if (op == '2') Instruction();
		else if (op == '3') exit(0);

	} while (1);
}

void gameSelecAndInstr::Instruction()
{
	system("cls");
	cout << "Instructions";
	cout << "\n----------------";
	cout << "\n Press spacebar to make player activate";
	cout << "\n\nPress any key to go back to menu";
	_getch();
}
