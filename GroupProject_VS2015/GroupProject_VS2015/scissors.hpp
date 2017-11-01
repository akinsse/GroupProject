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
