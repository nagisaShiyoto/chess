#pragma once

#include "board.h"
#include "player.h"

class Board;
class Player;

class Piece
{

// ------------------- //
// protected veriables //
// ------------------- //
protected:
	char _sign; 
	Player* _player;
	int _row;
	int _col;
	Board* _board;

// -------- //
// methodes //
// -------- //
public:
	// methods
	virtual int validMove(std::string dest) = 0;

	// getters & setters
	virtual char getSign() const;
	virtual int getRow() const;
	virtual int getCol() const;
	virtual void setPos(std::string newPlace);
	virtual Player* getPlayer() const;
	virtual Board* getBoard() const;
};

