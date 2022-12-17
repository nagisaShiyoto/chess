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
	Pipe _pipe;
	int _turn;

// ------- //
// methods //
// ------- //
public:
	// constructor & distructor
	Manager(Player const black,Player const white,Pipe const pipe,int const turn);
	~Manager();

	// getters & setters
	void seTurn(int const turn);

	Player getWhite() const;
	Player getBlack() const;
	Pipe getPipe() const;
	int geTurn() const;


	//fanc
	Player playerTurn(std::string sBoeard);
	void startGame();
	void sendReaction(int const code);
};

