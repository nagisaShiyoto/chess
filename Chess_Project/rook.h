#pragma once
#include "piece.h"
class Rook :public Piece
{

// -------- //
// methodes //
// -------- //
public:
	//constractor & distractor
	Rook(Player* player, Board* board, int row, int col, char sign);
	//realease the pointers(Player,board)
	~Rook();

	bool inPath(std::string place);
	virtual int validMove(const std::string dest) override;
};

