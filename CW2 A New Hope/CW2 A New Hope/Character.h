#pragma once

class Character{

protected:
	
	int x;
	int y;


public:
	int GetX();
	int GetY();
	Character();
	void SetX(int newx);
	void SetY(int newy);

};