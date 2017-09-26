#include "Character.h"
#include <cstdlib>

// Construct the character object by giving X and Y a random value out of 10
Character::Character(){

	x = rand() % 10;
	y = rand() % 10;
}

int Character::GetX(){

	return x;
}

int Character::GetY(){

	return y;
}

void Character::SetX(int newx){

	x = newx;
}

void Character::SetY(int newy){

	y = newy;
}

