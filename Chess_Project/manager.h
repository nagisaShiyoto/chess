#pragma once
#include "board.h"
#include "player.h"
#include "../comeWith/Pipe.h"
class Player;
class Boeard;
class Manager
{
// ----------------- //
// private veriables //
// ----------------- //
private:
	
	Player _black;
	Player _white;
	Board _board;
	Pipe _pipe;
	int _turn;

// ------- //
// methods //
// ------- //
public:
	// constructor & distructor
	Manager();
	~Manager();

	// getters & setters
	void setTurn(int const turn);

	Player getWhite() const;
	Player getBlack() const;
	Pipe getPipe() const;
	int getTurn() const;


	//fanc
	Player playerTurn(std::string sBoeard);
	void startGame();
	void sendReaction(int const code);
};

