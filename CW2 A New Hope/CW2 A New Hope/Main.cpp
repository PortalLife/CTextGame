#include "Character.h"
#include "Player.h"
#include "Game.h"
#include <vector>
#include <iostream>

int main(){

    // Create game objects
	std::vector <Character> enemies(10);
	Player ThePlayer;
    Game TheGame;

	// Tell the player their starting position
	std::cout << "You have spawned at " << ThePlayer.GetX() << "," << ThePlayer.GetY() << std::endl;

	// Tell the player where the enemies have spawned for every enemy in the vector
	for (int i = 0; i < enemies.size(); i++){

		std::cout << "Enemy spawned at " << enemies[i].GetX() << "," << enemies[i].GetY() << std::endl;
	}

	// Set the amount of turns the player has
	int turns = 1;
	char input;

	while (turns <= 30){

		// Get the users input, tell them the turn
		std::cout << "Turn " << turns << std::endl;
		std::cout << "Please input a direction. W - Up,  S - Down, A - Left, D - Right" << std::endl;
		std::cin >> input;

		// Output the new position
		ThePlayer.UserInput(input);

		std::cout << "Your new position is " << ThePlayer.GetX() << ", " << ThePlayer.GetY() << std::endl;

		// Randomly move enemies and display their movements
		TheGame.MoveEnemies(enemies);

		for (int i = 0; i < enemies.size(); i++){
			std::cout << "Enemy has moved to " << enemies[i].GetX() << ", " << enemies[i].GetY() << std::endl;
		}

		// Every NTH turn create a new enemy (default: 4)
		if (turns % 4 == 0){
			TheGame.CreateNewEnemy(enemies);
		}

		// Check if an enemy has collided with the player and increment the turn counter
		TheGame.CheckCollisions(enemies, ThePlayer);
		turns++;
	}
	
	std::cout << "Game over! " << std::endl;
	system("pause");
}
