#include "RPSGame.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>


int main()
{
	srand((unsigned)time(0));

	RPSGame game;
	game.play();
	return 0;
}