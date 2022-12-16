#pragma once
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
	~Player();

	// fanc
	int validMove(std::string const move);
	
	// getters
	std::string getMove()const;
	int geTeam()const;


};

