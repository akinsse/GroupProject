/******************************************************************************
* Authors:     Sean Patrick Akins
*              Edmund Dea
*              Trevor Rollins
*              Nathan Villegas
* Group:       35
* Class:       CS162-400
* Date:        10/27/2017
* Title:       Group Project
* Description: Declares the Paper class
******************************************************************************/

#ifndef PAPER_HPP
#define PAPER_HPP

#include "tool.hpp"

class Paper : public Tool
{
public:
  Paper();
  Paper(int tempStrength, char tempType = 'p') : Tool(tempStrength, tempType) {};
  int fight(Tool);
};

#endif
