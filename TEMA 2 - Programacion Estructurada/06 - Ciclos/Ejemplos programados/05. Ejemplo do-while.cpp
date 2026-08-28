#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	// Vamos a usar un do while para hacer un mini menu
	
	char continuar;
	int numero;
	
	do{
		cout << "Ingresa un numero: ";
		cin >> numero;
		
		numero *= 2;
		
		cout << "El doble es: " << numero << endl;
		
		cout << "Deseas continuar? (S/N)";
		cin >> continuar;
		
	} while(continuar == 'S' || continuar == 's');
	
	cout << "Hasta pronto!";
	
	return 0;
}

