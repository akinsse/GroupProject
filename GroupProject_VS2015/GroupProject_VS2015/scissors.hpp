/******************************************************************************
* Authors:     Sean Patrick Akins
*              Edmund Dea
*              Trevor Rollins
*              Nathan Villegas
* Group:       35
* Class:       CS162-400
* Date:        10/27/2017
* Title:       Group Project
* Description: Declares the Scissors class
******************************************************************************/

#ifndef SCISSORS_HPP
#define SCISSORS_HPP

#include "tool.hpp"

class Scissors : public Tool
{
public:
  Scissors();
  Scissors(int tempStrength, char tempType = 's') : Tool(tempStrength, tempType) {};
  int fight(Tool);
};


#endif
