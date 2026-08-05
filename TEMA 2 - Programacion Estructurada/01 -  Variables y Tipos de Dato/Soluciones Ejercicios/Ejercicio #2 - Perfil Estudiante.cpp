#include <iostream>
using namespace std;

int main() {
	
	string nombre = "", carrera = "";
	int edad = 0, cursos = 0;
	bool beca;
	
	cout << "* Ingresa tu nombre: ";
	getline(cin, nombre);	// getline nos permite leer el nombre completo
	
	cout << "* Ingresa tu edad: ";
	cin >> edad;
	
	cout << "* Ingresa tu carrera: ";
	cin.ignore();			// permite limpiar el buffer ( memoria temporal) del teclado para usar nuevamente el getline
	getline(cin, carrera);
	
	cout << "* Cantidad de cursos matriculados: ";
	cin >> cursos;
	
	cout << "* Tienes beca? (1 = si, 0 = no): ";
	cin >> beca;
	
	system("cls");
	
	cout << "----- PERFIL -----\n";
	cout << "Nombre: " << nombre << "\n";
	cout << "Edad: " << edad << "\n";
	cout << "Carrera: " << carrera << "\n";
	cout << "Cursos matriculados: " << cursos << "\n";
	cout << "Beca: " << beca << "\n";

	
	return 0;
}

