/******************************************************************************
* Authors:     Sean Patrick Akins
*              Edmund Dea
*              Trevor Rollins
*              Nathan Villegas
* Group:       35
* Class:       CS162-400
* Date:        10/27/2017
* Title:       Group Project
* Description: Defines the Tool class
******************************************************************************/

#include "tool.hpp"

/******************************************************************************
* Function:    Tool
* Arguments:   N/A
* Description: Default constructor for the Tool class
******************************************************************************/
Tool::Tool()
{
  strength = 1;
  type = ' '; //what should we use as default?
}

/******************************************************************************
* Function:    Tool
* Arguments:   N/A
* Description: Overloaded constructor for the Tool class
******************************************************************************/
Tool::Tool(int tempStrength, char tempType)
{
  strength = tempStrength;
  type = tempType;
}

/******************************************************************************
* Function:    getStrength
* Arguments:   N/A
* Description: Get function for strength
******************************************************************************/
int Tool::getStrength() const
{
  return strength;
}

/******************************************************************************
* Function:    getType
* Arguments:   N/A
* Description: Get function for type
******************************************************************************/
char Tool::getType() const
{
  return type;
}

/******************************************************************************
* Function:    setStrength
* Arguments:   int tempType
* Description: Set function for int type
******************************************************************************/
void Tool::setStrength(int tempType)
{
  type = tempType * 2;
}

/******************************************************************************
* Function:    setType
* Arguments:   char tempType
* Description: Set function for char type
******************************************************************************/
void Tool::setType(char tempType)
{
  type = tempType;
}
