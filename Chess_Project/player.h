#pragma once
#include <iostream>
#include <vector>
#include "piece.h"
#include "board.h"
#include "bishop.h"
#include "king.h"
#include "knight.h"
#include "pown.h"
#include "rook.h"
#include "queen.h"

class Piece;
class Board;

class Player
{
// ----------------- //
// private veriables //
// ----------------- //
private:

	int _team;
	Board _board;
	std::vector<Piece*> _pieces;

// ------- //
// methods //
// ------- //
public:
	// constractor
	Player(int team, std::string board);
	//~Player();

	// fanc
	int validMove(std::string const move);//after pieces
	Piece* getPiece(std::string place);
	
	// getters
	int getTeam()const;
};

