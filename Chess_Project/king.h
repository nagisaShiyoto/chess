#pragma once
#include "piece.h"

class King :public Piece
{
	public:
		King(Board board, Player player, int row, int col, char sign);
		int validMove(std::string dest) override;
};

