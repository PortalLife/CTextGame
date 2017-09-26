#include "Game.h"
#include <iostream>
#include "Character.h"

void Game::MoveEnemies(std::vector <Character> &enemy){

	// For every element in the vector, initalise a random number between 1 and 4 and move the enemy depending on what number is generated.
	for (int i = 0; i < enemy.size(); i++){

		int randomMover = rand() % 4 + 1;

		switch (randomMover){

		case 1:
			enemy[i].SetX(enemy[i].GetX() + 1);
			if (enemy[i].GetX() > 10){
				enemy[i].SetX(1);
				break;
			}
			break;

		case 2:
			enemy[i].SetX(enemy[i].GetX() - 1);
			if (enemy[i].GetX() < 0){
				enemy[i].SetX(10);
				break;
			}
			break;

		case 3:
			enemy[i].SetY(enemy[i].GetY() + 1);
			if (enemy[i].GetY() > 10)
			{
				enemy[i].SetY(0);
				break;
			}
			break;

		case 4:
			enemy[i].SetY(enemy[i].GetY() - 1);
			if (enemy[i].GetY() < 0){
				enemy[i].SetY(10);
				break;
			}

		}
	}
}

void Game::CheckCollisions(std::vector<Character> &enemy, Player &player){

	for (int i = 0; i < enemy.size(); i++){

		if (enemy[i].GetX() == player.GetX() && enemy[i].GetY() == player.GetY()){
			enemy.erase(enemy.begin() + i);
			std::cout << "Enemy defeated " << std::endl;
			return;
		}
	}
}

void Game::CreateNewEnemy(std::vector<Character> &enemy){

	Character newEnemy;
	enemy.push_back(newEnemy);

	for (int i = 0; i < enemy.size(); i++){

		if (enemy[i].GetX() == newEnemy.GetX() && enemy[i].GetY() == newEnemy.GetY()){
			newEnemy.SetX(newEnemy.GetX() + 1);
			newEnemy.SetY(newEnemy.GetY() + 1);
		}

	}

	std::cout << "New enemy has spawned at " << newEnemy.GetX() << ", " << newEnemy.GetY() << std::endl;
}