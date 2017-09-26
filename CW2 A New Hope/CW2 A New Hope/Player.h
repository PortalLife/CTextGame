#include "Character.h"
#pragma once

// Player class inheriting from the Character class - retains Get/Set methods and X/Y attributes. Has a unique constructor/method.
class Player :public Character{

public:

	void UserInput(char input);
	Player();
};