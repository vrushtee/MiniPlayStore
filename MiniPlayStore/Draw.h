#pragma once
#include<Windows.h>
#include<iostream>
#include<conio.h>
#include<dos.h>


#define SCREEN_WIDTH 110
#define SCREEN_HEIGHT 46
#define WIN_WIDTH 90
#define MENU_WIDTH 40
#define GAP_SIZE 9


class Draw
{
public:
	void getPosi(int x, int y);
	void setCursor();
	void drawBorder();

};