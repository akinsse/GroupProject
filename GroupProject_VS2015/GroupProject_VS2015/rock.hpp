/******************************************************************************
* Authors:     Sean Patrick Akins
*              Edmund Dea
*              Trevor Rollins
*              Nathan Villegas
* Group:       35
* Class:       CS162-400
* Date:        10/27/2017
* Title:       Group Project
* Description: Declares the Rock class
******************************************************************************/

#ifndef ROCK_HPP
#define ROCK_HPP

#include "tool.hpp"

class Rock : public Tool
{
public:
  Rock();
  Rock(int tempStrength, char tempType = 'r') : Tool(tempStrength, tempType) {};
  int fight(Tool);
};

#endif
