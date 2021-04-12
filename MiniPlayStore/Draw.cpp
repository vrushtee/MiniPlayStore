#include "Draw.h"
using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;


void Draw::getPosi(int x, int y)
{
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
}

void Draw::setCursor()
{

}

void Draw::drawBorder()
{
	for (int i = 0; i < SCREEN_WIDTH; i++) 
	{
		getPosi(i, SCREEN_HEIGHT); cout << "==";
	}

	for (int i = 0; i < SCREEN_HEIGHT; i++) 
	{
		getPosi(0, i); cout << "|";
		getPosi(SCREEN_WIDTH, i); cout << "|";
	}
	for (int i = 0; i < SCREEN_HEIGHT; i++) 
	{
		getPosi(WIN_WIDTH, i); cout << "|";
	}
}
