#include "Snake.h"
#include<iostream>
#include<conio.h>
#include <windows.h>
using namespace std;
enum dir { STOP = 0, LEFT, RIGHT, UP, DOWN };
COORD coord = { 0, 0 };
dir d;

void Snake::setup()
{
	gameover = false;
	d = STOP;
	x = width / 3;
	y = height / 2;
	fruitx = rand() % width;
	fruity = rand() % height;
	score = 0;

}

void Snake::draw()
{
	const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut, coord);
	for (int i = 0; i < width + 2; i++)
		cout << "*";
	cout << endl;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0)
				cout << "*";
			if (i == y && j == x)
				cout << "@";
			else if (i == fruity && j == fruitx)

				cout << "f";
			else
			{
				bool print = false;
				for (int k = 0; k < ntail; k++)
				{
					if (tailx[k] == j && taily[k] == i)
					{
						cout << "8";
						print = true;
					}
				}
				if (!print)
					cout << " ";
			}
			if (j == width - 1)
				cout << "*";
		}
		cout << endl;

	}
	for (int i = 0; i < width + 2; i++)
		cout << "*";



}

void Snake::input()
{
	if (_kbhit())
	{
		switch (_getch())
		{
		case 'a':
			d = LEFT;
			break;
		case'd':
			d = RIGHT;
			break;
		case'w':
			d = UP;
			break;
		case's':
			d = DOWN;
			break;
		case'x':
			gameover = true;
			break;
		default:
			cout << "wrong input";

		}
	}
}

void Snake::logic()
{
	int prevx = tailx[0];
	int prevy = taily[0];
	int prev2x, prev2y;
	tailx[0] = x;
	taily[0] = y;
	for (int i = 1; i < ntail; i++)
	{
		prev2x = tailx[i];
		prev2y = taily[i];
		tailx[i] = prevx;
		taily[i] = prevy;
		prevx = prev2x;
		prevy = prev2y;
	}
	switch (d)
	{
	case LEFT:
		x = x - 1;
		break;
	case RIGHT:
		x = x + 1;
		break;
	case UP:
		y = y - 1;
		break;
	case DOWN:
		y = y + 1;
		break;
	default:
		break;
	}

	if (x >= width)
		x = 0;
	else
		if (x < 0)
			x = width - 1;
	if (y >= height)
		y = 0;
	else
		if (y < 0)
			y = height - 1;
	for (int i = 0; i < ntail; i++)
		if (tailx[i] == x && taily[i] == y)
			gameover = true;
	if (x == fruitx && y == fruity)
	{
		score += 10;
		fruitx = rand() % width;
		fruity = rand() % height;
		ntail++;
	}
}

void Snake::snake()
{
	setup();
	while (!gameover)
	{
		draw();
		cout << endl << endl << endl;
		cout << "score==" << score << endl;
		input();
		logic();
		Sleep(40);

	}
}