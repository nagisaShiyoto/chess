#include "board.h"
#define ZeroInA 48
#define AinA 97
#define SIZE_BOEARD 8
Board::Board(std::string stringBrd)
{
	int i = 0;
	_stringBrd = stringBrd;
	for (i = 0; i < _stringBrd.size(); i++)
	{
		_board[i / SIZE_BOEARD][i % SIZE_BOEARD] = _stringBrd[i];
	}
}

Board::Board()
{
	int i = 0;
	_stringBrd = "rnbqkbnrpppppppp################################PPPPPPPPRNBQKBNR";
	for (i = 0; i < _stringBrd.size(); i++)
	{
		_board[i / SIZE_BOEARD][i % SIZE_BOEARD] = _stringBrd[i];
	}
}

bool Board::isFree(int row, int col)
{
	return false;
}

void Board::movePiece(char src, char place)
{
}

void Board::convertStringToArrray(std::string board)
{
	
}

void Board::createThreatsBoard(char** board)
{

}

char Board::getP(std::string place)
{
	int row = place[0] - AinA;
	int col = place[1] - ZeroInA;
	return _board[row][col];
}

/*
the func returns the starting posetion of the board and preloads the board with it
input: none
output: the board as strings (string)
*/
void Board::preloadBoard()
{
	std::string startingPosetion = "rnbqkbnrpppppppp################################PPPPPPPPRNBQKBNR";
	convertStringToArrray(startingPosetion);
}