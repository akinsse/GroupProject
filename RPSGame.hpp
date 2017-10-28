#ifndef RPSGAME_HPP
#define RPSGAME_HPP
#include "inputValidation.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::endl;


class Tool;
class Rock;
class Paper;
class Scissors;
enum WinType {HumanWin=0, ComputerWin, Tie};
srand((unsigned)time(0));


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

