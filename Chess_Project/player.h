#pragma once
#include <iostream>
class Player
{
// ----------------- //
// private veriables //
// ----------------- //
private:

	int _team;


// ------- //
// methods //
// ------- //
public:
	// constractor
	Player(int team);
	Player();
	//~Player();

	// fanc
	int validMove(std::string const move);//after pieces
	
	// getters
	std::string getMove()const;
	int getTeam()const;
};

