#include "Player.h"
#include <iostream>

Player::Player(){

	x = 0;
	y = 0;
}

void Player::UserInput(char input){


	// Depending on the input gotten, move the player in a given direction - if they exceed the game boundaries, undo the movement and display this.
	switch (input)
	{
	case 'w':
		y++;

		if (y > 10){
			std::cout << "Cannot move outside game boundaries!" << std::endl;
			y--;
			return;
		}

		break;

	case 'a':
		x--;

		if (x < 0){
			std::cout << "Cannot move outside game boundaries!" << std::endl;
			x++;
			return;
		}

		break;
	case 's':
		y--;
		if (y < 0){
			std::cout << "Cannot move outside game boundaries!" << std::endl;
			y++;
			return;
		}

		break;

	case 'd':
		x++;
		if (x > 10){
			std::cout << "Cannot move outside game boundaries!" << std::endl;
			x--;
			return;
		}

		break;

	default:

		std::cout << "Invalid input" << std::endl;
	}
}

