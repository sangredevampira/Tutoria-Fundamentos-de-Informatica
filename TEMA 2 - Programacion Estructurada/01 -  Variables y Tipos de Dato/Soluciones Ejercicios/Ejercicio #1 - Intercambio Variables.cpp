#include <iostream>
using namespace std;

int main() {
	
	int a = 10, b = 77;
	int aux; 			// creamos una variable auxiliar
	
	cout << "* antes del intercambio: \n"
		<< "a: " << a << "\n"
		<< "b: " << b << "\n";
	
	aux = a; // la variable aux nos permite guardar una copia del valor de a
	a = b;
	b = aux;
	
	cout << "\n* luego del intercambio: \n"
		<< "a: " << a << "\n"
		<< "b: " << b << "\n";	
	return 0;
}

