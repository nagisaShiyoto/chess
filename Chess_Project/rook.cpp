#include "rook.h"
#define ZeroInA 48
#define AinA 97

Rook::Rook(Player* player, Board* board, int row, int col, char sign)
{
	_player = player;
	_board = board;
	_sign = sign;
	_row = row;
	_col = col;
}

Rook::~Rook()
{
	delete _player;
	delete _board;
}
bool Rook::inPath(std::string dest)
{
	if (this->_row == (dest[0] - AinA) || this->_col == (dest[1] - ZeroInA))
	{
		return true;
	}
	return false;
}
int Rook::validMove(const std::string dest)
{
	//0,1,8
	
	if (isupper(this->_board->getP(dest)) != isupper(this->_sign)|| this->_board->getP(dest)=='#')
	{
		if(inPath(dest))
		{
			
		}
		else
		{
			return 6;
		}
	}
	else
	{
		return 3;
	}
	return 0;
}
