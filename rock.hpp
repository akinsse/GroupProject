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
