/******************************************************************************
* Authors:     Sean Patrick Akins
*              Edmund Dea
*              Trevor Rollins
*              Nathan Villegas
* Group:       35
* Class:       CS162-400
* Date:        10/27/2017
* Title:       Group Project
* Description: Defines the RPSGame class
******************************************************************************/

#include "RPSGame.hpp"

/******************************************************************************
* Function:    RPSGame
* Arguments:   N/A
* Description: Default constructor for the RPSGame class
******************************************************************************/
RPSGame::RPSGame()
{
	srand((unsigned)time(0));
	init();
}

/******************************************************************************
* Function:    init
* Arguments:   N/A
* Description: Initializes the win count variables
******************************************************************************/
void RPSGame::init()
{
	setCompWins(0);
	setHumanWins(0);
	setTies(0);
}

/******************************************************************************
* Function:    setCompWins
* Arguments:   int cWins
* Description: Sets the number of computer wins
******************************************************************************/
void RPSGame::setCompWins(int cWins)
{
	winCount[ComputerWin] = cWins;
}

/******************************************************************************
* Function:    setHumanWins
* Arguments:   int hWins
* Description: Sets the number of human wins
******************************************************************************/
void RPSGame::setHumanWins(int hWins)
{
	winCount[HumanWin] = hWins;
}

/******************************************************************************
* Function:    setTies
* Arguments:   int ties
* Description: Sets the number of ties
******************************************************************************/
void RPSGame::setTies(int ties)
{
	winCount[Tie] = ties;
}

/******************************************************************************
* Function:    setCompTool
* Arguments:   int strength
* Description: Sets the computer's tool
******************************************************************************/
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

/******************************************************************************
* Function:    setHumanTool
* Arguments:   int strength
* Description: Sets the human's tool
******************************************************************************/
void RPSGame::setHumanTool(int strength)
{
	cout << "Choose your tool (r-rock, p-paper, s-scissor): ";
	char humanTool = charValidator('R', 'P', 'S');

	if (humanTool == 'R')
	{
		human = new Rock(strength);
	}
	else if (humanTool == 'P')
	{
		human = new Paper(strength);
	}
	else if (humanTool == 'S')
	{
		human = new Scissors(strength);
	}
}

/******************************************************************************
* Function:    setCompStrength
* Arguments:   int hStrength
*              int& cStrength
* Description: Sets the computer's tool strength to the human's tool strength
******************************************************************************/
void RPSGame::setCompStrength(int hStrength, int& cStrength)
{
	cStrength = hStrength;
}

/******************************************************************************
* Function:    setHumanStrength
* Arguments:   int& hStrength
* Description: Sets the human's tool strength
******************************************************************************/
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

/******************************************************************************
* Function:    incCompWins
* Arguments:   N/A
* Description: Helper function to increment number of computer wins
******************************************************************************/
void RPSGame::incCompWins()
{
	winCount[ComputerWin]++;
}

/******************************************************************************
* Function:    incHumanWins
* Arguments:   N/A
* Description: Helper function to increment number of human wins
******************************************************************************/
void RPSGame::incHumanWins()
{
	winCount[HumanWin]++;
}

/******************************************************************************
* Function:    incTies
* Arguments:   N/A
* Description: Helper function to increment number of ties
******************************************************************************/
void RPSGame::incTies()
{
	winCount[Tie]++;
}

/******************************************************************************
* Function:    getCompWins
* Arguments:   N/A
* Description: Get function for the computer win count
******************************************************************************/
int RPSGame::getCompWins() const
{
	return winCount[ComputerWin];
}

/******************************************************************************
* Function:    getHumanWins
* Arguments:   N/A
* Description: Get function for the human win count
******************************************************************************/
int RPSGame::getHumanWins() const
{
	return winCount[HumanWin];
}

/******************************************************************************
* Function:    getTies
* Arguments:   N/A
* Description: Get function for the tie count
******************************************************************************/
int RPSGame::getTies() const
{
	return winCount[Tie];
}

/******************************************************************************
* Function:    getCompTool
* Arguments:   N/A
* Description: Get function for the computer's tool
******************************************************************************/
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

/******************************************************************************
* Function:    getHumanTool
* Arguments:   N/A
* Description: Get function for the human's tool
******************************************************************************/
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

/******************************************************************************
* Function:    printScore
* Arguments:   N/A
* Description: Print the win count score
******************************************************************************/
void RPSGame::printScore()
{
	cout << "Human wins: " << getHumanWins() << endl;
	cout << "Computer wins: " << getCompWins() << endl;
	cout << "Ties: " << getTies() << endl;
}

/******************************************************************************
* Function:    compare
* Arguments:   int cValue
*              int hValue
* Description: Determines the winner or if it's a tie
******************************************************************************/
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

/******************************************************************************
* Function:    deleteTools
* Arguments:   N/A
* Description: Cleanup deleting dynamically allocated memory for Tool pointers
******************************************************************************/
void RPSGame::deleteTools()
{
	delete computer;
	computer = nullptr;

	delete human;
	human = nullptr;
}

/******************************************************************************
* Function:    play
* Arguments:   N/A
* Description: Processes game play between the computer and human
******************************************************************************/
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

/******************************************************************************
* Function:    ~RPSGame
* Arguments:   N/A
* Description: Default destructor for the RPSGame class
******************************************************************************/
RPSGame::~RPSGame()
{
	deleteTools();
}
