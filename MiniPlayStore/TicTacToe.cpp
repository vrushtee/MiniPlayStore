#include "TicTacToe.h"
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<ctime>
#include<thread>

using namespace std;

void TicTacToe::TicTacToelevelSelection()
{
	system("cls");
	cout << "Enter Name: ";
	cin >> plyrName;
	cout << "\n";
	system("cls");

	cout << plyrName << " Which level would you like to play? " << endl;
	cout << "\n";
	cout << "1. Beginner" << endl;
	cout << "2. Intermediate" << endl;
	cout << "3. Advance" << endl;
	cout << "\n";
	
	cin >> levelChoice;
	if (levelChoice == 1)
	{
		levelOne();
	}
	else if (levelChoice == 2)
	{
		levelTwo();
	}
	else if (levelChoice == 3)
	{
		levelThree();
	}
	else
	{
		cout << "Please choose level" << endl;
	}
}

void TicTacToe::levelOne()
{
	for (int rnd = 1; rnd <= 5; rnd++)
	{
		system("cls");
		cout << "round number: " << rnd << " of " << 5 << endl;
		cout << plyrName << " choice: " << plyrScore << endl;
		cout << "machine score: " << compScore << endl;

		cout << "1. rock" << endl;
		cout << "2. paper" << endl;
		cout << "3. scissor" << endl;
		cout << "4. Lizard" << endl;
		cout << "5. Spock" << endl;

		do
		{
			cout << "Choose: ";
			cin >> plyrChoice;

		} while (plyrChoice != 1 && plyrChoice != 2 && plyrChoice != 3 && plyrChoice != 4 && plyrChoice != 5);

		srand(time(0));
		compChoice = (rand() % 5) + 1;
		if (plyrChoice == 1 && compChoice == 3)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		else if (plyrChoice == 2 && compChoice == 1)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		else if (plyrChoice == 3 && compChoice == 2)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		if (plyrChoice == 1 && compChoice == 4)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		else if (plyrChoice == 4 && compChoice == 5)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		else if (plyrChoice == 5 && compChoice == 3)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		else if (plyrChoice == 3 && compChoice == 4)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		else if (plyrChoice == 4 && compChoice == 2)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		else if (plyrChoice == 2 && compChoice == 5)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		else if (plyrChoice == 5 && compChoice == 1)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		else if (plyrChoice == compChoice)
		{
			cout << "Draw!!!" << endl;
		}
		else
		{
			cout << "Computer Won!!!" << endl;
			compScore++;
		}
		cout << "Press any key to continue the game..." << endl;
		_getch();

	}
	if (compScore == plyrScore)
	{
		cout << "This match is a draw match" << endl;
	}
	else if (plyrScore > compScore)
	{
		cout << plyrName << " won the game!!!" << endl;
		this_thread::sleep_for(chrono::milliseconds(3000));
		levelTwo();
	}
	else
	{
		cout << "Computer won the game." << endl;
	}
}

void TicTacToe::levelTwo()

{
	for (int rnd = 1; rnd <= 10; rnd++)
	{
		system("cls");
		cout << "round number: " << rnd << " of " << 10 << endl;
		cout << plyrName << " choice: " << plyrScore << endl;
		cout << "machine score: " << compScore << endl;

		cout << "1. rock" << endl;
		cout << "2. paper" << endl;
		cout << "3. scissor" << endl;
		cout << "4. Lizard" << endl;
		cout << "5. Spock" << endl;

		do
		{
			cout << "Choose: ";
			cin >> plyrChoice;

		} while (plyrChoice != 1 && plyrChoice != 2 && plyrChoice != 3 && plyrChoice != 4 && plyrChoice != 5 && plyrChoice != 6 && plyrChoice != 7 && plyrChoice != 8 && plyrChoice != 9 && plyrChoice != 10);

		srand(time(0));
		compChoice = (rand() % 5) + 1;
		if (plyrChoice == 1 && compChoice == 3)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		else if (plyrChoice == 2 && compChoice == 1)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		else if (plyrChoice == 3 && compChoice == 2)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		if (plyrChoice == 1 && compChoice == 4)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		else if (plyrChoice == 4 && compChoice == 5)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		else if (plyrChoice == 5 && compChoice == 3)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		else if (plyrChoice == 3 && compChoice == 4)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		else if (plyrChoice == 4 && compChoice == 2)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		else if (plyrChoice == 2 && compChoice == 5)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		else if (plyrChoice == 5 && compChoice == 1)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		else if (plyrChoice == compChoice)
		{
			cout << "Draw!!!" << endl;
		}
		else
		{
			cout << "Computer Won!!!" << endl;
			compScore++;
		}
		cout << "Press any key to continue the game..." << endl;
		_getch();

	}
	if (compScore == plyrScore)
	{
		cout << "This match is a draw match" << endl;
	}
	else if (plyrScore > compScore)
	{
		cout << plyrName << " won the game!!!" << endl;
		//cout << "Now we will proceed to Level Two!!!" << endl;
		this_thread::sleep_for(chrono::milliseconds(3000));
		levelThree();
	}
	else
	{
		cout << "Computer won the game." << endl;
	}

}

void TicTacToe::levelThree()
{
	for (int rnd = 1; rnd <= 15; rnd++)
	{
		system("cls");
		cout << "round number: " << rnd << " of " << 15 << endl;
		cout << plyrName << " choice: " << plyrScore << endl;
		cout << "machine score: " << compScore << endl;

		cout << "1. rock" << endl;
		cout << "2. paper" << endl;
		cout << "3. scissor" << endl;
		cout << "4. Lizard" << endl;
		cout << "5. Spock" << endl;

		do
		{
			cout << "Choose: ";
			cin >> plyrChoice;

		} while (plyrChoice != 1 && plyrChoice != 2 && plyrChoice != 3 && plyrChoice != 4 && plyrChoice != 5 && plyrChoice != 6 && plyrChoice != 7 && plyrChoice != 8 && plyrChoice != 9 && plyrChoice != 10 && plyrChoice != 11 && plyrChoice != 12 && plyrChoice != 13 && plyrChoice != 14 && plyrChoice != 15);

		srand(time(0));
		compChoice = (rand() % 5) + 1;
		if (plyrChoice == 1 && compChoice == 3)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		else if (plyrChoice == 2 && compChoice == 1)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		else if (plyrChoice == 3 && compChoice == 2)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		if (plyrChoice == 1 && compChoice == 4)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		else if (plyrChoice == 4 && compChoice == 5)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		else if (plyrChoice == 5 && compChoice == 3)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		else if (plyrChoice == 3 && compChoice == 4)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		else if (plyrChoice == 4 && compChoice == 2)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		else if (plyrChoice == 2 && compChoice == 5)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		else if (plyrChoice == 5 && compChoice == 1)
		{
			cout << "You Won!!!" << endl;
			plyrScore++;
		}
		else if (plyrChoice == compChoice)
		{
			cout << "Draw!!!" << endl;
		}
		else
		{
			cout << "Computer Won!!!" << endl;
			compScore++;
		}
		cout << "Press any key to continue the game..." << endl;
		_getch();

	}
	if (compScore == plyrScore)
	{
		cout << "This match is a draw match" << endl;
	}
	else if (plyrScore > compScore)
	{
		cout << plyrName << " won the game!!!" << endl;
		this_thread::sleep_for(chrono::milliseconds(3000));
	}
	else
	{
		cout << "Computer won the game." << endl;
	}

}