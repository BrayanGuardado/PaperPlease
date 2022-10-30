#include "Person.h"
#include<windows.h>
#include<fstream>
#include<string>
#include<iostream>
#include<conio.h>
#include"ID.h"
#include<time.h>
#include"Passport.h"
using namespace std;

void Person::gotoxy(int x, int y) {

	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;

	SetConsoleCursorPosition(hCon, dwPos);

}

int Person::selectOption() {
	gotoxy(43, 30); cout << "Selecciona si la persona es apta para pasar y si su documentacion coincide o no:" << endl;
	gotoxy(70, 32); cout << "1) Entra" << endl;
	gotoxy(70, 33); cout << "2) No Entra" << endl;
	gotoxy(70, 34); cout << "Seleccion: " << endl;	
	gotoxy(81, 34); cin >> validationInput;

	return validationInput;
}

void Person::correctValidation(int verification) {

	gotoxy(70, 36);
	for (int i = 0; i < 13; i++) {
		cout << fraseValidacion[i];
		Sleep(50);
	}

	if (verification == 1) {
		gotoxy(57, 38); cout << "La opcion seleccionada fue correcta!! (+1)";
		system("pause>0");
		counterPoints++;
	}
	else {
		gotoxy(57, 38); cout << "La seleccion fue erronea... (-1 Punto)";
		system("pause>0");
		counterPoints--;
		
	}
		
}

void Person::incorrectValidation(int verification) {

	gotoxy(70, 36);
	for (int i = 0; i < 13; i++) {
		cout << fraseValidacion[i];
		Sleep(50);
	}

	if (verification == 2) {
		gotoxy(57, 38); cout << "La opcion seleccionada fue correcta!! (+1)";
		system("pause>0");
		counterPoints++;
	}
	else {
		gotoxy(57, 38); cout << "La seleccion fue erronea... (-1 Punto)";
		system("pause>0");
		counterPoints--;
	}
}

void Person::terroristValidation(int verification) {

	gotoxy(70, 36);
	for (int i = 0; i < 13; i++) {
		cout << fraseValidacion[i];
		Sleep(50);
	}

	if (verification == 2) {
		gotoxy(57, 38); cout << "Lograste detectar a un terrorista, felicidades!! (+2)";
		system("pause>0");
		counterPoints += 2;
	}
	else {
		gotoxy(55, 38); cout << "Dejaste entrar a un terrorista, fatal... (-2 Punto)";
		system("pause>0");
		counterPoints -= 2;
	}
}


void Person::drawRules() {
	system("cls");
	system("color 8f");
	system("title PAPER PLEASE");

	ifstream fileRules("reglas.txt");
	while (getline(fileRules, line)) {
		cout << line << endl;
	}
	gotoxy(56, 18);
	for (int i = 0; i <= 26; i++) {
		cout <<" " << fraseEntrada[i];
		Sleep(80);
	}
	gotoxy(56, 19);
	for (int i = 0; i <= 24; i++) {
		cout << " "<<"-";
		Sleep(80);
	}
}

bool Person::verificar(int num, int arreglo[10]) {
	for (int i = 1; i <= 10; i++) {
		if (num == arreglo[i]) {
			return true;
		}
	}
	return false;
}

int Person::randNumber() {
	int num = 0, arreglo[10];

	srand(time(NULL));
	for (int i = 1; i < 10; i++) {
		while (verificar(num, arreglo)) {
			num = rand() % 10 + 1;
		}

		arreglo[i] = num;
	}

	for (int i = 1; i < 10; i++) {
		std::cout << arreglo[i] << std::endl;
	}
	return arreglo[7];
}

void Person::drawInterface() {

	gotoxy(5,2); cout << "Puntaje: " << counterPoints;

	//ORILLAS DE LA INTERFAZ---------------
	for (int x = 5; x <= 150; x++) {
		gotoxy(x, 3); cout << char(205);
		gotoxy(x, 40); cout << char(205);
	}
	for (int y = 3; y <= 39; y++) {
		gotoxy(5, y); cout << char(186);
		gotoxy(151, y); cout << char(186);
	}

	//--------Esquinas de la Interfaz---------
	gotoxy(5, 3); cout << char(201);
	gotoxy(151, 3); cout << char(187);
	gotoxy(5, 40); cout << char(200);
	gotoxy(151, 40); cout << char(188);

	//ID------------------------------------
	for (int i = 8; i <= 68; i++) {//BORDES
		gotoxy(i, 4); cout << char(205);
		gotoxy(i, 25); cout << char(205);
	}
	for (int i = 5; i <= 24; i++) {
		gotoxy(8, i); cout << char(186);
		gotoxy(68, i); cout << char(186);
	}
	gotoxy(8, 4); cout << char(201);
	gotoxy(68, 4); cout << char(187);
	gotoxy(8, 25); cout << char(200);
	gotoxy(68, 25); cout << char(188);

	//IMAGEN DE ID---------------------
	gotoxy(14, 7); cout << char(178);
	gotoxy(18, 7); cout << char(178);
	gotoxy(16, 9); cout << char(205);
	gotoxy(15, 9); cout << char(200);
	gotoxy(17, 9); cout << char(188);
	for (int i = 12; i < 21; i++) {
		gotoxy(i, 5); cout << char(205);
		gotoxy(i, 10); cout << char(205);
	}
	for (int i = 6; i < 10; i++) {
		gotoxy(12, i); cout << char(186);
		gotoxy(20, i); cout << char(186);
	}

	//PASAPORTE-----------------------------
	for (int i = 85; i <= 148; i++) {//BORDES X
		gotoxy(i, 4); cout << char(205);
		gotoxy(i, 25); cout << char(205);
	}
	for (int i = 5; i <= 24; i++) {//BORDES Y
		gotoxy(85, i); cout << char(186);
		gotoxy(148, i); cout << char(186);
	}
	gotoxy(85, 4); cout << char(201);
	gotoxy(148, 4); cout << char(187);
	gotoxy(85, 25); cout << char(200);
	gotoxy(148, 25); cout << char(188);

	//IMAGEN DE PASAPORTE------------------
	for (int i = 89; i < 98; i++) {
		gotoxy(i, 5); cout << char(205);
		gotoxy(i, 10); cout << char(205);
	}
	for (int i = 6; i < 10; i++) {
		gotoxy(89, i); cout << char(186);
		gotoxy(97, i); cout << char(186);
	}
	//CARA Y OJOS------------------------
	gotoxy(91, 7); cout << char(178);
	gotoxy(95, 7); cout << char(178);
	gotoxy(93, 9); cout << char(205);
	gotoxy(92, 9); cout << char(200);
	gotoxy(94, 9); cout << char(188);

	//LINEA INTERMEDIA----------------
	for (int i = 6; i < 151; i++) {
		gotoxy(i, 27); cout << char(205);
	}
}

void Person::drawInterfaceExit() {
	for (int x = 5; x <= 150; x++) {
		gotoxy(x, 3); cout << char(205);
		gotoxy(x, 40); cout << char(205);
	}
	for (int y = 3; y <= 39; y++) {
		gotoxy(5, y); cout << char(186);
		gotoxy(151, y); cout << char(186);
	}

	//--------Esquinas de la Interfaz---------
	gotoxy(5, 3); cout << char(201);
	gotoxy(151, 3); cout << char(187);
	gotoxy(5, 40); cout << char(200);
	gotoxy(151, 40); cout << char(188);
}

void Person::showPoints() {
	
	if (counterPoints <= 3) {
		system("cls");
		drawInterfaceExit();
		gotoxy(40, 2); std::cout << "Has perdido el juego, vas de lado" << std::endl;
		gotoxy(40, 5); std::cout << "ESTIMADO TRABAJADOR:";

		std::ifstream file("despidoContrato.txt");
		while (getline(file, line)) {
			std::cout << line << std::endl;
		}
		system("pause>0");

		counterPoints = 0;
	}
	else {
		system("cls");
		gotoxy(40, 3); std::cout << "Felicidades has ganado" << std::endl;
		gotoxy(30, 4); std::cout << "El jefe te dara un aumento un dia de estos crack :)" << std::endl;
		system("pause>0");
		counterPoints = 0;
	}

}

//Personas
ID id;
Passport pass;

void Person::juanManuelInfo() {
	system("cls");
	id.drawJuanManuelID();
	pass.drawJuanManuelPass();
	drawInterface();
	terroristValidation(selectOption());
}

void Person::mariaJuanaInfo() {
	system("cls");
	id.drawMariaJuanaID();
	pass.drawMariaJuanaPass();
	drawInterface();
	incorrectValidation(selectOption());

}

void Person::brayanIssacInfo() {
	system("cls"); 
	id.brayanIssacID();
	pass.brayanPass();
	drawInterface();
	correctValidation(selectOption());
}

void Person::joanSebastianInfo() {
	system("cls");
	id.joanSebastianID();
	pass.joanPass();
	drawInterface();
	correctValidation(selectOption());
}

void Person::andresManuelInfo() {
	system("cls");
	id.andresManuelID();
	pass.andresPass();
	drawInterface();
	incorrectValidation(selectOption());
}

void Person::claudineInfo() {
	system("cls");
	id.claudineID();
	pass.claudinePass();
	drawInterface();
	terroristValidation(selectOption());
}

void Person::fernandoReyesInfo() {
	system("cls");
	id.fernandoReyesID();
	pass.fernandoPass();
	drawInterface();
	incorrectValidation(selectOption());
}

void Person::nikolayInfo() {
	system("cls");
	id.nikolayID();
	pass.nikolayPass();
	drawInterface();
	correctValidation(selectOption());
}

void Person::pedroArmandoInfo() {
	system("cls");
	id.pedroArmandoID();
	pass.pedroArmandoPass();
	drawInterface();
	incorrectValidation(selectOption());
}


//OLEADAS QUE ENCAPSULAN A TODOS LOS PERSONAJES
void Person::personasAleatorias() {

	for (int i = 0; i <= 5; i++) {
		switch (randNumber()) {
		case 1:
			pedroArmandoInfo();//M
			break;
		case 2:
			nikolayInfo();//B
			break;
		case 3:
			fernandoReyesInfo();//M
			break;
		case 4:
			claudineInfo();//T
			break;
		case 5:
			joanSebastianInfo();//B
			break;
		case 6:
			juanManuelInfo();//T
			break;
		case 7:
			brayanIssacInfo();//B
			break;
		case 8:
			mariaJuanaInfo();//M
			break;
		case 9:
			andresManuelInfo();//M
		}
	}

	showPoints();

}