/******************************************************************************
* Authors:     Sean Patrick Akins
*              Edmund Dea
*              Trevor Rollins
*              Nathan Villegas
* Group:       35
* Class:       CS162-400
* Date:        10/27/2017
* Title:       Group Project
* Description: Declares the Tool class
******************************************************************************/

#ifndef TOOL_HPP
#define TOOL_HPP

class Tool
{
public:
  Tool();
  Tool(int, char);
  virtual ~Tool() {}
  int getStrength() const;
  char getType() const;
  void setStrength(int);
  void setType(char);
  virtual int fight(Tool) { return 0; }

protected:
  int strength;
  char type;
};

#endif
