#include "rock.hpp"

Rock::Rock() : Tool ()
{
   Tool::setStrength(1);
   Tool::setType('r');
}

int Rock::fight(Tool opponentChoice)
{
  if(opponentChoice.getType() == 'p')
    return (Tool::getStrength() * 0.5);
  else if(opponentChoice.getType() == 's')
    return (Tool::getStrength() * 2);
  else
    return (Tool::getStrength());
}
