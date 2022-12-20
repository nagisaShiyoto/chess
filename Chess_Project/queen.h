#pragma once
#include "piece.h"
#include "rook.h"
#include "bishop.h"

class queen :
public Piece,public Rook,public Bishop
{
	public:
		queen(Board board, Player player, int row, int col, char sign);
		int validMove(std::string dest) override;
};

