#pragma once

#include "piece.h"
#include "player.h"
#include <string>

class Piece;
class Player;

class Board
{

// ----------------- //
// veribals          //
// ----------------- //
private:
	std::string _stringBrd;
	
public:
	char _board[8][8];
	int _threatsBoard[8][8]; // 0 - not, 1 - white, 2 - black, 3 - both
// ------- //
// methods //
// ------- //
public:
	// constractor
	Board(std::string stringBrd);
	Board();
	//~Board();

	bool isFree(int row, int col);
	void movePiece(char src, char place);
	void convertStringToArrray(std::string board);
	void createThreatsBoard(char** board);

	// getters
	char getP(std::string place);

	//setters
	void setBorad();



// -------------------- //
// assistance functions //
// -------------------- //
private:
	void preloadBoard(); // loading the board
};

