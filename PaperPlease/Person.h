#pragma once
#include<iostream>
using namespace std;
class Person {

public:
	void showPoints();
	int randNumber();
	int selectOption();
	bool verificar(int num, int arreglo[10]);
	void terroristValidation(int verification);
	void correctValidation(int verification);
	void incorrectValidation(int verification);
	void drawRules();
	void drawInterface();
	void drawInterfaceExit();
	void gotoxy(int x, int y);

	//Personas
	void juanManuelInfo();
	void mariaJuanaInfo();
	void brayanIssacInfo();
	void andresManuelInfo();
	void claudineInfo();
	void fernandoReyesInfo();
	void joanSebastianInfo();
	void nikolayInfo();
	void pedroArmandoInfo();
	void personasAleatorias();

	string dascNoAccess[10];
	string inputName;
	string line;
	int inputOpc;
	int validationInput;

private:
	int counterPoints = 0;
	char fraseEntrada[31] = { "Bienvenido a PAPER PLEASE" };
	char fraseValidacion[13] = { "Validando..." };
};

