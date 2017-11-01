#include "tool.hpp"

Tool::Tool()
{
  strength = 1;
  type = ' '; //what should we use as default?
}
Tool::Tool(int tempStrength, char tempType)
{
  strength = tempStrength;
  type = tempType;
}
int Tool::getStrength() const
{
  return strength;
}
char Tool::getType() const
{
  return type;
}
void Tool::setStrength(int tempType)
{
  type = tempType * 2;
}
void Tool::setType(char tempType)
{
  type = tempType;
}
