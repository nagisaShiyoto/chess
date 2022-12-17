#include "manager.h"

#define WHITE_TEAM 0
#define BLACK_TEAM 1

/*

*/
void Manager::startGame()
{
	
}


Manager::Manager()
{
	this->_board = Board();
	this->_white = Player(WHITE_TEAM);
	this->_black = Player(BLACK_TEAM);
	this->_pipe = Pipe();
	this->_turn = 0;
}
