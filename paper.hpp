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
