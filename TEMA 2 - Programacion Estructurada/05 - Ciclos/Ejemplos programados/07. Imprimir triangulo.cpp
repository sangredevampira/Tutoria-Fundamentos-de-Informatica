#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int cantFilas;
	
	cout << "Ingresa la cantidad de filas: ";
	cin >> cantFilas;	// cuantas filas va a tener el triangulo
	
	for(int filas = 1; filas <= cantFilas; filas++){ // ciclo externo: lleva el conteo de las filas que imprimir
		
		// ciclo interno: solamente lleva el control de los "*" a imprimir
		for(int asterisco = 1; asterisco <= filas; asterisco++){ // el valor de "asterisco" se reinicia cada vez que volvemos al ciclo externo
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}

