#include "piece.h"

/* this is a getter for sign */
char Piece::getSign() const
{
    return this->_sign;
}

/* this is a getter for row */
int Piece::getRow() const
{
    return this->_row;
}

/* this is a getter for col */
int Piece::getCol() const
{
    return this->_col;
}

/* this is a setter for the full posetion (row and col) */
void Piece::setPos(const int row, const int col)
{
    this->_row = row;
    this->_col = col;
}

/* this is a getter for the player */
Player* Piece::getPlayer() const
{
    return this->_player;
}

/* this is a getter for the board */
Board* Piece::getBoard() const
{
    return this->_board;
}
