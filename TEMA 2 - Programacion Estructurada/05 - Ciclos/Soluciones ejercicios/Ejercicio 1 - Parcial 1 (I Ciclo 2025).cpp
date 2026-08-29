#include <iostream>
using namespace std;

// a) implementacion funcion esPrimo()
bool esPrimo(int numero) {
	
	bool primo = true;
	
	if (numero <= 1) {
		primo = false;
	}
	
	for (int i = 2; i < numero && primo; i++) {
		if (numero % i == 0) {
			primo = false;
		}
	}
	
	return primo;
}
	
// b)implementacion funcion fibonacci()
int fibonacci(int numero) {
	
	int anterior = 0;
	int actual = 1;
	int sumaFibonacci = 0;
	
	for (int i = 1; i <= numero; i++) {
		
		if (esPrimo(anterior)) { 		// verificamos que el término es primo		
			cout << anterior << endl;
			sumaFibonacci += anterior;
		}
		
		int siguiente = anterior + actual;	// generamos el siguiente término
		anterior = actual;
		actual = siguiente;
	}
	
	return sumaFibonacci;
}

int main(int argc, char *argv[]) {
	
	int n;
	
	cout << "Ingresa un valor: ";
	cin >> n;
	
	cout << "Resutado de la suma: " << fibonacci(n);
	
	return 0;
}

