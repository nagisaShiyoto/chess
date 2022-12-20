#pragma once
#include "piece.h"

class Knight :public Piece
{
	public:
		Knight(Board board, Player player, int row, int col, char sign);
		int validMove(std::string dest) override;
};

