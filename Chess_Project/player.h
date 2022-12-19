#pragma once
#include <iostream>
#include <vector>
#include "piece.h"

class Piece;

class Player
{
// ----------------- //
// private veriables //
// ----------------- //
private:

	int _team;
	std::vector<Piece*> pieces;

// ------- //
// methods //
// ------- //
public:
	// constractor
	Player(int team);
	Player();
	//~Player();

	// fanc
	int validMove(std::string const move);//after pieces
	
	// getters
	std::string getMove()const;
	int getTeam()const;
};

