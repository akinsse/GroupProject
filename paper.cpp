#include "paper.hpp"

Paper::Paper() : Tool ()
{
  Tool::setStrength(1);
  Tool::setType('p');
}

int Paper::fight(Tool opponentChoice)
{
  if(opponentChoice.getType() == 's')
    return (Tool::getStrength() * 0.5);
  else if (opponentChoice.getType() == 'r')
    return (Tool::getStrength() * 2);
  else
    return Tool::getStrength();
}
