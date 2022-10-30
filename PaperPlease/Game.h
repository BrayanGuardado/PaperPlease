#pragma once
#include"Person.h"
#include<fstream>
class Game : public Person{
public: 
	void gameLoop();
private:
	bool gameOver = false;
};

