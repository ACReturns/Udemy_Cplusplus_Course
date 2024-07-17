#include <iostream>
#include <string>
using namespace std;

const int rows = 3;
const int cols = 3;

void runGame();
void initializeGameBoard(string gameBoard[rows][cols]);
void printCurrentBoard(string gameBoard[rows][cols]);
void getUserInput(bool xTurn, string gameBoard[rows][cols]);
bool cellAlreadyOccupied(int row, int col, string gameBoard[rows][cols]);
string getWinner(string gameBoard[rows][cols]);
bool isBoardFull(string gameBoard[rows][cols]);

int main()
{
	runGame();

	return 0;
}

void runGame()
{
	string winner = "";
	string player1 = "X";
	string player2 = "O";
	string draw = "C";
	string gameBoard[rows][cols];

	initializeGameBoard(gameBoard);
	printCurrentBoard(gameBoard);
}

void initializeGameBoard(string gameBoard[rows][cols])
{
	// set a space for each block in the grid
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < cols; col++)
		{
			gameBoard[row][col] = " ";
		}
	}
}

void printCurrentBoard(string gameBoard[rows][cols])
{
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < cols; col++)
		{
			cout << gameBoard[row][col];
			if (col < 2)
			{
				cout << " | ";
			}
		}
		cout << endl;
		if (row < 2)
		{
			cout << "- - - - -" << endl;
		}
	}
	// Giving an extra space after the board is complete
	cout << endl;
}

void getUserInput(bool xTurn, string gameBoard[rows][cols])
{

}

bool cellAlreadyOccupied(int row, int col, string gameBoard[rows][cols])
{
	return false;
}

string getWinner(string gameBoard[rows][cols])
{
	return "";
}

bool isBoardFull(string gameBoard[rows][cols])
{
	return false;
}