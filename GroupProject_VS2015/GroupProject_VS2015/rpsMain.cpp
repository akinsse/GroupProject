/******************************************************************************
* Authors:     Sean Patrick Akins
*              Edmund Dea
*              Trevor Rollins
*              Nathan Villegas
* Group:       35
* Class:       CS162-400
* Date:        10/27/2017
* Title:       Group Project
* Description: Defines the entrypoint for the program
******************************************************************************/

#include "RPSGame.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

/******************************************************************************
* Function:    main
* Arguments:   N/A
* Description: Entrypoint for the program
******************************************************************************/
int main()
{
	srand((unsigned)time(0));

	RPSGame game;
	game.play();
	return 0;
}