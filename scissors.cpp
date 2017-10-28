#include "scissors.hpp"

Scissors::Scissors() : Tool ()
{
  Tool::setStrength(1);
  Tool::setType('s');
}

int Scissors::fight(Tool opponentChoice)
{
  if(opponentChoice.getType() == 'r')
    return (Tool::getStrength() * 0.5);
  else if (opponentChoice.getType() == 'p')
    return (Tool::getStrength() * 2);
  else
    return (Tool::getStrength());
}
