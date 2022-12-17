#include "manager.h"

#define WHITE_TEAM 0
#define BLACK_TEAM 1

Player Manager::playerTurn(std::string sBoeard)
{
	return Player();
}

/*

*/
void Manager::startGame()
{
	
}

void Manager::sendReaction(int const code)
{
}


Manager::Manager(Pipe pipe)
{
	this->_board = Board();
	this->_white = Player(WHITE_TEAM);
	this->_black = Player(BLACK_TEAM);
	this->_pipe = pipe;
	this->_turn = 0;
}

void Manager::setTurn(int const turn)
{
}

Player Manager::getWhite() const
{
	return Player();
}

Player Manager::getBlack() const
{
	return Player();
}

Pipe Manager::getPipe() const
{
	return Pipe();
}

Board Manager::getBoard() const
{
	return Board();
}

int Manager::getTurn() const
{
	return 0;
}
