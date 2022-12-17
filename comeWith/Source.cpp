/*
This file servers as an example of how to use Pipe.h file.
It is recommended to use the following code in your project, 
in order to read and write information from and to the Backend
*/
#include <stdlib.h>
#include "Pipe.h"
#include "../Chess_Project/manager.h"
#include <iostream>
#include <thread>
#define WHITE_TEAM 0
#define BLACK_TEAM 1

using std::cout;
using std::endl;
using std::string;


void main()
{
	//open the file automaticlly
	int result = _spawnl(_P_NOWAIT, "chessGraphics.exe", "chessGraphics.exe", nullptr);

	// Check the return value of _spawnl to see if the execution was successful
	if (result == -1) 
	{
		cout << "coudn't open try on your own:(";
	}
	Sleep(5000);
	//////////////////////////////////////////////////////////////////////////////////

	int Vmove = 0;
	srand(time_t(NULL));

	
	Pipe p;
	bool isConnect = p.connect();
	
	string ans;
	while (!isConnect)
	{
		cout << "cant connect to graphics" << endl;
		cout << "Do you try to connect again or exit? (0-try again, 1-exit)" << endl;
		std::cin >> ans;

		if (ans == "0")
		{
			cout << "trying connect again.." << endl;
			Sleep(5000);
			isConnect = p.connect();
		}
		else 
		{
			p.close();
			return;
		}
	}
	

	char msgToGraphics[1024];
	// msgToGraphics should contain the board string accord the protocol
	//setup,start game (manager)
	Manager manager(p);
	strcpy_s(msgToGraphics, "rnbqkbnrpppppppp################################PPPPPPPPRNBQKBNR0\0");
	//hopefully all the setup 
	p.sendMessageToGraphics(msgToGraphics);   // send the board string

	// get message from graphics
	string msgFromGraphics = p.getMessageFromGraphics();

	while (msgFromGraphics != "quit")
	{
		// should handle the string the sent from graphics
		// according the protocol. Ex: e2e4           (move e2 to e4)
		
		// to-do:
		//check valid move-get piace
		//move\dont move accordingly
		if (manager.getTurn() == WHITE_TEAM)
		{
			Vmove = manager.getWhite().validMove(msgFromGraphics);
			//bourdMove,
			//playerMove(piace)
			manager.setTurn(BLACK_TEAM);
		}
		else
		{
			Vmove = manager.getBlack().validMove(msgFromGraphics);
			//bourdMove,
			//playerMove(piace)
			manager.setTurn(WHITE_TEAM);

		}
		//add /0??
		msgToGraphics[0] = Vmove + 48;
		msgToGraphics[1] = 0;
		//strcpy_s(msgToGraphics, 2,SVmove); // msgToGraphics should contain the result of the operation

		/******* JUST FOR EREZ DEBUGGING ******/
		int r = rand() % 10; // just for debugging......
		msgToGraphics[0] = (char)(1 + '0');
		msgToGraphics[1] = 0;
		/******* JUST FOR EREZ DEBUGGING ******/


		// return result to graphics		
		p.sendMessageToGraphics(msgToGraphics);   
		

		// get message from graphics
		msgFromGraphics = p.getMessageFromGraphics();


	
	}
	//end the open of chessGraphic.exe:)
	system("taskkill /F /IM chessGraphics.exe");
	p.close();
}