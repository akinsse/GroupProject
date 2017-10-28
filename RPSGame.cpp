#include "RPSGame.hpp"

RPSGame::RPSGame()
{
	init();
}

void RPSGame::init()
{
	setCompWins(0);
	setHumanWins(0);
	setTies(0);
}

void RPSGame::setCompWins(int cWins)
{
	winCount[ComputerWin] = cWins;
}

void RPSGame::setHumanWins(int hWins)
{
	winCount[HumanWin] = hWins;
}

void RPSGame::setTies(int ties)
{
	winCount[Tie] = ties;
}

void RPSGame::setCompTool(int strength)
{
	enum Choice { eRock = 0, ePaper, eScissors };
	Choice compChoice = (Choice)(rand() % 3);

	switch (compChoice)
	{
	case eRock:
		computer = new Rock(strength);
		cout << "Computer chose rock." << endl;
		break;
	case ePaper:
		computer = new Paper(strength);
		cout << "Computer chose paper." << endl;
		break;
	case eScissors:
		computer = new Scissors(strength);
		cout << "Computer chose scissors." << endl;
		break;
	}
}

void RPSGame::setHumanTool(int strength)
{
	cout << "Choose your tool (r-rock, p-paper, s-scissor): ";
	char humanTool = charValidator('R', 'P', 'S');

	if (humanTool == 'R')
	{
		computer = new Rock(strength);
	}
	else if (humanTool == 'P')
	{
		computer = new Paper(strength);
	}
	else if (humanTool == 'S')
	{
		computer = new Scissors(strength);
	}
}

void RPSGame::setCompStrength(int hStrength, int& cStrength)
{
	if (hStrength == 1)
	{
		cStrength = 1;
	}
	else if (hStrength != 1)
	{
		cStrength = ((rand() % (hStrength + 1)) + (hStrength - 1)); //Sets Comp strength to random value within 1 of human strength
	}
}
void RPSGame::setHumanStrength(int& hStrength)
{
	cout << "Do you want to set different strengths for the tools (Y/N)?";
	char differentStrengths = charValidator('Y', 'N');

	if (differentStrengths == 'Y')
	{
		cout << "What would you like the strength of your tool to be?";
		hStrength = intValidator(1);
	}
	else
	{
		hStrength = 1;
	}
}


void RPSGame::incCompWins()
{
	winCount[ComputerWin]++;
}

void RPSGame::incHumanWins()
{
	winCount[HumanWin]++;
}

void RPSGame::incTies()
{
	winCount[Tie]++;
}

int RPSGame::getCompWins() const
{
	return winCount[ComputerWin];
}

int RPSGame::getHumanWins() const
{
	return winCount[HumanWin];
}

int RPSGame::getTies() const
{
	return winCount[Tie];
}

Tool* RPSGame::getCompTool() const
{
	if (computer != nullptr)
	{
		return computer;
	}
	else
	{
		cout << "Computer is nullptr" << endl;
		return computer;
	}
}

Tool* RPSGame::getHumanTool() const
{
	if (human != nullptr)
	{
		return human;
	}
	else
	{
		cout << "Human is nullptr." << endl;
		return human;
	}
}

void RPSGame::printScore()
{
	cout << "Human wins: " << getHumanWins() << endl;
	cout << "Computer wins: " << getCompWins() << endl;
	cout << "Ties: " << getTies() << endl;
}

void RPSGame::compare(int cValue, int hValue)
{
	if (cValue > hValue)
	{
		cout << "Computer wins!" << endl;
		incCompWins();
	}
	else if (cValue < hValue)
	{
		cout << "You win!!" << endl;
		incHumanWins();
	}
	else if (cValue == hValue)
	{
		cout << "It's a tie!" << endl;
		incTies();
	}
}

void RPSGame::deleteTools()
{
	delete computer;
	computer = nullptr;
	delete human;
	human = nullptr;
}

void RPSGame::play()
{
	
	int humanValue, compValue;
	int humanStrength, compStrength;
	char keepPlaying;

	cout << "Welcome to Rock, Paper, Scissors!" << endl;
	
	setHumanStrength(humanStrength);
	setCompStrength(humanStrength, compStrength);
	do
	{
		setHumanTool(humanStrength);
		setCompTool(compStrength);

		compValue = getCompTool()->fight(*getHumanTool());
		humanValue = getHumanTool()->fight(*getCompTool());

		compare(compValue, humanValue);
		printScore();
		deleteTools();

		cout << "Would you like to play another round (Y/N)?";
		keepPlaying = charValidator('Y', 'N');

	} while (keepPlaying != 'N');
}

RPSGame::~RPSGame()
{
}
