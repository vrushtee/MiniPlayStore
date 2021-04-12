#pragma once
class Snake
{
public:
	bool gameover;
	const int width = 70;
	const int height = 50;
	int x, y, fruitx, fruity, score;
	int tailx[100], taily[100], ntail;
	enum dir { STOP = 0, LEFT, RIGHT, UP, DOWN };
	//COORD coord = { 0, 0 };
	dir d;

	void setup();
	void draw();
	void input();
	void logic();
	void snake();
};

