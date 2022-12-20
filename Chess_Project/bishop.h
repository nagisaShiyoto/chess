#pragma once
#include "piece.h"

class Bishop :public Piece
{
	public:
		Bishop(Board board, Player player, int row, int col, char sign);
		int validMove(std::string dest) override;
};

