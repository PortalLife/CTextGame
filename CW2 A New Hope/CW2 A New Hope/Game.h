#pragma once
#include "Character.h"
#include <vector>
#include "Player.h"


// Game class for handling game logic with methods
class Game{

public:


	void MoveEnemies(std::vector <Character> &enemy);
	void CheckCollisions(std::vector<Character> &enemy, Player &player);
	void CreateNewEnemy(std::vector<Character> &enemy);
};