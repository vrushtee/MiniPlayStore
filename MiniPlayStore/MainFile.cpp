#include<iostream>
#include<conio.h>
#include<dos.h>
#include<Windows.h>
#include"Draw.h"
#include "gameSelecAndInstr.h"
#include"ShootingEnemy.h"

using namespace std;

void main()
{
	ShootingEnemy p;
	do 
	{
		system("cls");
		p.getPosi(10, 5); cout << "  -------------------------- ";//12
		p.getPosi(10, 6); cout << " |      MINI PLAY STORE     | ";
		p.getPosi(10, 7); cout << "  --------------------------";
		p.getPosi(10, 9); cout << "1. Car Racing";
		p.getPosi(10, 10); cout << "2. Space Shotting";
		p.getPosi(10, 11); cout << "3. Snake";
		p.getPosi(10, 12); cout << "4. Tic, Tac & Toe";
		p.getPosi(10, 13); cout << "Select option: ";
		char op = _getch();

		if (op == '1') p.CarRacing();
		else if (op == '2') p.Shooting();
		else if (op == '3') p.Snake();
		else if (op == '4') p.TicTacToe();
		else if (op == '5') exit(0);

	} while (1);
	_getch();
}
