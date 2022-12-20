#include "player.h"

Player::Player(int team, std::string board)
{
	int place = 0;
	this->_team = team;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			
			place++;
			char sign = board[place];

			if (team == 0)
			{
				if (isupper(sign))
				{
					switch (sign)
					{
					case 'P':
						this->_pieces.push_back(new Pown(this->_board, *this, i, j, sign));
						break;
					case 'R':
						break;
					case 'Q':
						break;
					case 'K':
						break;
					case 'N':
						break;
					case 'B':
						break;
					default:
						throw("ERROR: in player constractor");

					}
				}
			}
			else if (team == 1)
			{
				if (islower(sign))
				{
					switch (sign)
					{
						case 'p':
							break;
						case 'r':
							break;
						case 'q':
							break;
						case 'k':
							break;
						case 'n':
							break;
						case 'b':
							break;
						default:
							throw("ERROR: in player constractor");

					}
				}
			}
		}
	}
}


int Player::validMove(std::string const move)
{
	return 0;
}

Piece* Player::getPiece(std::string place)
{

}

int Player::getTeam() const
{
	return 0;
}
