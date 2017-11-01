/******************************************************************************
* Authors:     Sean Patrick Akins
*              Edmund Dea
*              Trevor Rollins
*              Nathan Villegas
* Group:       35
* Class:       CS162-400
* Date:        10/27/2017
* Title:       Group Project
* Description: Defines the paper class
******************************************************************************/

#include "paper.hpp"

/******************************************************************************
* Function:    Paper
* Arguments:   N/A
* Description: Default constructor for the Paper class
******************************************************************************/
Paper::Paper() : Tool ()
{
  Tool::setStrength(1);
  Tool::setType('p');
}

/******************************************************************************
* Function:    fight
* Arguments:   Tool opponentChoice
* Description: Handles paper fighting against the opponent's Tool
******************************************************************************/
int Paper::fight(Tool opponentChoice)
{
  if(opponentChoice.getType() == 's')
    return (Tool::getStrength() * 0.5);
  else if (opponentChoice.getType() == 'r')
    return (Tool::getStrength() * 2);
  else
    return Tool::getStrength();
}
