#include "manager.h"

Manager::Manager(Player const black, Player const white, Pipe const pipe, int const turn=0)
{
	_black = black;
	_white = white;
	_pipe = pipe;
	_turn = turn;
}
