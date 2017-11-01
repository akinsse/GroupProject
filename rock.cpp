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

#include "rock.hpp"

/******************************************************************************
* Function:    Rock
* Arguments:   N/A
* Description: Default constructor for the Rock class
******************************************************************************/
Rock::Rock() : Tool ()
{
   Tool::setStrength(1);
   Tool::setType('r');
}

/******************************************************************************
* Function:    fight
* Arguments:   Tool opponentChoice
* Description: Handles Rock fighting against the opponent's Tool
******************************************************************************/
int Rock::fight(Tool opponentChoice)
{
  if(opponentChoice.getType() == 'p')
    return (Tool::getStrength() * 0.5);
  else if(opponentChoice.getType() == 's')
    return (Tool::getStrength() * 2);
  else
    return (Tool::getStrength());
}
