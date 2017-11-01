/******************************************************************************
* Authors:     Sean Patrick Akins
*              Edmund Dea
*              Trevor Rollins
*              Nathan Villegas
* Group:       35
* Class:       CS162-400
* Date:        10/27/2017
* Title:       Group Project
* Description: Defines the scissors class
******************************************************************************/

#include "scissors.hpp"

/******************************************************************************
* Function:    Scissors
* Arguments:   N/A
* Description: Default constructor for the Scissors class
******************************************************************************/
Scissors::Scissors() : Tool ()
{
  Tool::setStrength(1);
  Tool::setType('s');
}

/******************************************************************************
* Function:    fight
* Arguments:   Tool opponentChoice
* Description: Handles Scissors fighting against the opponent's Tool
******************************************************************************/
int Scissors::fight(Tool opponentChoice)
{
  if(opponentChoice.getType() == 'r')
    return (Tool::getStrength() * 0.5);
  else if (opponentChoice.getType() == 'p')
    return (Tool::getStrength() * 2);
  else
    return (Tool::getStrength());
}
