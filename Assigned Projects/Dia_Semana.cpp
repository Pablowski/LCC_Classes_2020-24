/*
Nombre: Dia_Semana.cpp
Autor: Emiliano Tadeo Carlos Ibarra
Fecha: 27-01-2021
Descripcion: Este codigo dice el dia de la semana segun un numero 
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int dia;

	cout << "Este c" << (char)162 << "digo dice un d" << (char)161 <<"a de la semana con base en un n"<< (char)163 << "mero del 1 al 7." << endl;
	cout << "Ingrese un n"<< (char)163 << "mero del 1 al 7: ";
	cin >> dia;

	switch(dia){
		case 2:
			cout << "El d" << (char)161 <<"a es Lunes." << endl;
			break;
		case 3:
			cout << "El d" << (char)161 <<"a es Martes." << endl;
			break;
		case 4:
			cout << "El d" << (char)161 <<"a es Mi"<< (char)130 << "rcoles." << endl;
			break;
		case 5:
			cout << "El d" << (char)161 <<"a es Jueves." << endl;
			break;
		case 6:
			cout << "El d" << (char)161 <<"a es Viernes." << endl;
			break;
		case 7:
			cout << "El d" << (char)161 <<"a es S" << (char)160 <<"bado." << endl;
			break;
		case 1:
			cout << "El d" << (char)161 <<"a es Domingo." << endl;
			break;
		default:
			cout << "Reinicie e ingrese un d" << (char)161 <<"a v"<< (char)160 <<"lido." << endl;
	}
	system("pause");
	return 0;
}
