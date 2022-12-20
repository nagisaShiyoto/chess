#pragma once
#include "piece.h"

class Pown :public Piece
{
	public:
		Pown(Board board, Player player, int row, int col, char sign);
		int validMove(std::string dest) override;
};

