#include "Passport.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void Passport::drawJuanManuelPass() {

	gotoxy(138, 5); cout << " ---------";
	gotoxy(137, 6); cout << "|PASAPORTE|";
	gotoxy(138, 7); cout << "---------";

	gotoxy(100,6); cout << "Nombre:";
	gotoxy(100,7); cout << "Morales";
	gotoxy(100,8); cout << "Sanchez";
	gotoxy(100,9); cout << "Juan Manuel";

	gotoxy(100, 11); cout << "Domicilio";
	gotoxy(100, 12); cout << "Doroteo Arango #34";
	gotoxy(100, 13); cout << "Colonia: Linda Vista";

	gotoxy(100, 16); cout << "Nacionalidad: Mexicano";
	gotoxy(100, 17); cout << "CURP: RESC930720HTSSRR01";
	gotoxy(100, 18); cout << "Edad: 19";
	gotoxy(100, 19); cout << "Sexo: Masculino";

	gotoxy(100, 21); cout << "Fecha de Nacimiento: 12/03/2003";
	gotoxy(100, 22); cout << "Vigencia: 2021 - 2023";
	gotoxy(100, 23); cout << "Trabaja en: EZIC";

}

void Passport::drawMariaJuanaPass() {

	gotoxy(137, 5); cout << " ---------";
	gotoxy(137, 6); cout << "|PASAPORTE|";
	gotoxy(138, 7); cout << "---------";

	gotoxy(100, 6); cout << "Nombre:";
	gotoxy(100, 7); cout << "Ramirez";
	gotoxy(100, 8); cout << "Ochoa";
	gotoxy(100, 9); cout << "Maria Juana";

	gotoxy(100, 11); cout << "Domicilio";
	gotoxy(100, 12); cout << "Juan Jose Arreola #97";
	gotoxy(100, 13); cout << "Colonia: Las Moras";

	gotoxy(100, 16); cout << "Nacionalidad: Mexicano";
	gotoxy(100, 17); cout << "CURP: CAAJ880203HTSSCV13";
	gotoxy(100, 18); cout << "Edad: 38";
	gotoxy(100, 19); cout << "Sexo: Masculino";

	gotoxy(100, 21); cout << "Fecha de Nacimiento: 05/08/1984";
	gotoxy(100, 22); cout << "Vigencia: 2021 - 2023";
	gotoxy(100, 23); cout << "Trabaja en: GOOGLE";



}

void Passport::pedroArmandoPass() {
	gotoxy(137, 5); cout << " ---------";
	gotoxy(137, 6); cout << "|PASAPORTE|";
	gotoxy(138, 7); cout << "---------";

	gotoxy(100, 6); cout << "Nombre:";
	gotoxy(100, 7); cout << "Castro";
	gotoxy(100, 8); cout << "Garcia";
	gotoxy(100, 9); cout << "Pedro Armando";

	gotoxy(100, 11); cout << "Domicilio";
	gotoxy(100, 12); cout << "Las Americas #23 Int. 3A";
	gotoxy(100, 13); cout << "Colonia: Libertadores";

	gotoxy(100, 16); cout << "Nacionalidad: Estadounidense";
	gotoxy(100, 17); cout << "CURP: LOML730307MTSPLS06";
	gotoxy(100, 18); cout << "Edad: 30";
	gotoxy(100, 19); cout << "Sexo: Masculino";

	gotoxy(100, 21); cout << "Fecha de Nacimiento: 04/01/1992";
	gotoxy(100, 22); cout << "Vigencia: 2021 - 2023";
	gotoxy(100, 23); cout << "Trabaja en: AMAZON";
}

void Passport::nikolayPass() {
	gotoxy(137, 5); cout << " ---------";
	gotoxy(137, 6); cout << "|PASAPORTE|";
	gotoxy(138, 7); cout << "---------";

	gotoxy(100, 6); cout << "Nombre:";
	gotoxy(100, 7); cout << "Magomedov";
	gotoxy(100, 8); cout << "Petrova";
	gotoxy(100, 9); cout << "Nikolay";

	gotoxy(100, 11); cout << "Domicilio";
	gotoxy(100, 12); cout << "Jardines de Leon #194";
	gotoxy(100, 13); cout << "Colonia: La Paz de Orquidea";

	gotoxy(100, 16); cout << "Nacionalidad: Ruso";
	gotoxy(100, 17); cout << "CURP: CAPI461121MTSRZM02";
	gotoxy(100, 18); cout << "Edad: 27";
	gotoxy(100, 19); cout << "Sexo: Masculino";

	gotoxy(100, 21); cout << "Fecha de Nacimiento: 10/01/1995";
	gotoxy(100, 22); cout << "Vigencia: 2022 - 2025";
	gotoxy(100, 23); cout << "Trabaja en: LEGACY RTX";
}

void Passport::fernandoPass() {
	gotoxy(137, 5); cout << " ---------";
	gotoxy(137, 6); cout << "|PASAPORTE|";
	gotoxy(138, 7); cout << "---------";

	gotoxy(100, 6); cout << "Nombre:";
	gotoxy(100, 7); cout << "Castillo";
	gotoxy(100, 8); cout << "Reyes";
	gotoxy(100, 9); cout << "Fernando";

	gotoxy(100, 11); cout << "Domicilio";
	gotoxy(100, 12); cout << "Santa Monica #57";
	gotoxy(100, 13); cout << "Colonia: La Arboleda";

	gotoxy(100, 16); cout << "Nacionalidad: Mexicano";
	gotoxy(100, 17); cout << "CURP: CACF800526HTSSSR01";
	gotoxy(100, 18); cout << "Edad: 40";
	gotoxy(100, 19); cout << "Sexo: Masculino";

	gotoxy(100, 21); cout << "Fecha de Nacimiento: 09/02/1982";
	gotoxy(100, 22); cout << "Vigencia: 2018 - 2021";
	gotoxy(100, 23); cout << "Trabaja en: CAFETERIA STAR";
}

void Passport::claudinePass() {
	gotoxy(137, 5); cout << " ---------";
	gotoxy(137, 6); cout << "|PASAPORTE|";
	gotoxy(138, 7); cout << "---------";

	gotoxy(100, 6); cout << "Nombre:";
	gotoxy(100, 7); cout << "Thomas";
	gotoxy(100, 8); cout << "Richard";
	gotoxy(100, 9); cout << "Claudine";

	gotoxy(100, 11); cout << "Domicilio";
	gotoxy(100, 12); cout << "Resi. Los Jardines #1930";
	gotoxy(100, 13); cout << "Colonia: Costa Rica";

	gotoxy(100, 16); cout << "Nacionalidad: Frances";
	gotoxy(100, 17); cout << "CURP: GUUC690419HTSLRN07";
	gotoxy(100, 18); cout << "Edad: 24";
	gotoxy(100, 19); cout << "Sexo: Femenino";

	gotoxy(100, 21); cout << "Fecha de Nacimiento: 09/02/1998";
	gotoxy(100, 22); cout << "Vigencia: 2021 - 2024";
	gotoxy(100, 23); cout << "Trabaja en: NAZI COMPANY";
}

void Passport::joanPass() {
	gotoxy(137, 5); cout << " ---------";
	gotoxy(137, 6); cout << "|PASAPORTE|";
	gotoxy(138, 7); cout << "---------";

	gotoxy(100, 6); cout << "Nombre:";
	gotoxy(100, 7); cout << "Morales";
	gotoxy(100, 8); cout << "Rojas";
	gotoxy(100, 9); cout << "Joan Sebastian";

	gotoxy(100, 11); cout << "Domicilio";
	gotoxy(100, 12); cout << "Priv. Las Cabanas #154";
	gotoxy(100, 13); cout << "Colonia: Los Altos";

	gotoxy(100, 16); cout << "Nacionalidad: Mexicano";
	gotoxy(100, 17); cout << "CURP: MAMG940610HTSRRL03";
	gotoxy(100, 18); cout << "Edad: 42";
	gotoxy(100, 19); cout << "Sexo: Masculino";

	gotoxy(100, 21); cout << "Fecha de Nacimiento: 09/02/1980";
	gotoxy(100, 22); cout << "Vigencia: 2022 - 2025";
	gotoxy(100, 23); cout << "Trabaja en: CANTANTE";
}

void Passport::andresPass() {
	gotoxy(137, 5); cout << " ---------";
	gotoxy(137, 6); cout << "|PASAPORTE|";
	gotoxy(138, 7); cout << "---------";

	gotoxy(100, 6); cout << "Nombre:";
	gotoxy(100, 7); cout << "Gonzales";
	gotoxy(100, 8); cout << "Jimenez";
	gotoxy(100, 9); cout << "Andres Manuel";

	gotoxy(100, 11); cout << "Domicilio";
	gotoxy(100, 12); cout << "Las Palmas #129";
	gotoxy(100, 13); cout << "Colonia: Santa Cecilia";

	gotoxy(100, 16); cout << "Nacionalidad: Mexicano";
	gotoxy(100, 17); cout << "CURP: TIPC490202HTSNZN07";
	gotoxy(100, 18); cout << "Edad: 39";
	gotoxy(100, 19); cout << "Sexo: Femenino";

	gotoxy(100, 21); cout << "Fecha de Nacimiento: 09/02/1983";
	gotoxy(100, 22); cout << "Vigencia: 2019 - 2022";
	gotoxy(100, 23); cout << "Trabaja en: GIGOLO";
}

void Passport::brayanPass() {
	gotoxy(137, 5); cout << " ---------";
	gotoxy(137, 6); cout << "|PASAPORTE|";
	gotoxy(138, 7); cout << "---------";

	gotoxy(100, 6); cout << "Nombre:";
	gotoxy(100, 7); cout << "Torres";
	gotoxy(100, 8); cout << "Garcia";
	gotoxy(100, 9); cout << "Brayan Issac";

	gotoxy(100, 11); cout << "Domicilio";
	gotoxy(100, 12); cout << "Tateposco #89";
	gotoxy(100, 13); cout << "Colonia: Las Moras";

	gotoxy(100, 16); cout << "Nacionalidad: Mexicano";
	gotoxy(100, 17); cout << "CURP: SECM620929HTSGPG06";
	gotoxy(100, 18); cout << "Edad: 22";
	gotoxy(100, 19); cout << "Sexo: Masculino";

	gotoxy(100, 21); cout << "Fecha de Nacimiento: 15/09/2000";
	gotoxy(100, 22); cout << "Vigencia: 2021 - 2024";
	gotoxy(100, 23); cout << "Trabaja en: CONSTRUCCION";
}