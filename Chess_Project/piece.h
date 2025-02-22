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
<<<<<<< HEAD
	virtual int validMove(const std::string dest) = 0;
=======
	virtual int validMove(std::string dest) = 0;
>>>>>>> 4eab1340442a493c089a670867b4fa8abce813f7

	// getters & setters
	virtual char getSign() const;
	virtual int getRow() const;
	virtual int getCol() const;
	virtual void setPos(std::string newPlace);
	virtual Player* getPlayer() const;
	virtual Board* getBoard() const;
};

