#include "board.h"

Board::Board()
{

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