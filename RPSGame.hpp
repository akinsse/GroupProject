/******************************************************************************
* Authors:     Sean Patrick Akins
*              Edmund Dea
*              Trevor Rollins
*              Nathan Villegas
* Group:       35
* Class:       CS162-400
* Date:        10/27/2017
* Title:       Group Project
* Description: Declares the RPSGame class
******************************************************************************/

#ifndef RPSGAME_HPP
#define RPSGAME_HPP

#include "inputValidation.hpp"
#include "paper.hpp"
#include "rock.hpp"
#include "scissors.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;

enum WinType
{
	HumanWin = 0,
	ComputerWin,
	Tie
};

class RPSGame
{
private:
	Tool* human;
	Tool* computer;
	int winCount[3];

	void setCompWins(int cWins);
	void setHumanWins(int hWins);
	void setTies(int ties);
	void setCompTool(int strength);
	void setHumanTool(int strength);
	void init();
	void setCompStrength(int hStrength, int& cStrength);
	void setHumanStrength(int& hStrength);

	int getCompWins() const;
	int getHumanWins() const;
	int getTies() const;
	Tool* getCompTool() const;
	Tool* getHumanTool() const;

	void incCompWins();
	void incHumanWins();
	void incTies();
	void printScore();
	void compare(int cValue, int hValue);
	void deleteTools();

public:
	void play();
	RPSGame();
	~RPSGame();
};

#endif
