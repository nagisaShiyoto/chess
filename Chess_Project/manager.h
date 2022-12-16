#pragma once
#include "board.h"
#include "player.h"
#include "../comeWith/Pipe.h"
class Player;
class Boeard;
class manager
{
// ----------------- //
// private veriables //
// ----------------- //
private:
	
	Player _black;
	Player _white;
	Pipe _pipe;
	int _turn;

// ------- //
// methods //
// ------- //
public:

	void sendReaction(int code);
};

