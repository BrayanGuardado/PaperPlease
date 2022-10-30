#include "Game.h"
#include"ID.h"
#include"Passport.h"
#include<iostream>
#include"Person.h"
using namespace std;

void Game::gameLoop() {

	Person info;

	while (!gameOver) {

		drawRules();
		gotoxy(75, 21); cout << "1) Jugar" << endl;
		gotoxy(75, 22); cout << "2) Salir" << endl;
		gotoxy(75, 23); cout << "Seleccion: ";
		gotoxy(86, 23); cin >> inputOpc;

		switch (inputOpc) {
		case 1:
			info.personasAleatorias();
			break;

		case 2:
			gameOver = true;
			break;

		}

	}

}
