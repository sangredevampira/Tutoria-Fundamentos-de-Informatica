#include <iostream>
using namespace std;

int main() {
	
	int mayor;
	int a = 150;
	int b = 800;
	
	string mensaje;
	
	mayor =(b >= a) ? b : a; // almacenamos el resultado de la condicion dentro de "mayor"
	// en este caso se retorna el valor de b si la condicion es verdadera, si es falsa retorna el valor de a
	
	cout << "mayor: " << mayor << endl;
	
	mensaje =(b >= a) ? "el numero mayor es b" : "el numero mayor es a"; 
	// tambien podemos retornar y guardar los resultados en strings
	
	cout << "mensaje: "  << mensaje;
	
	return 0;
}
