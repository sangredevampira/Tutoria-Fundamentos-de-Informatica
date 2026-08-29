#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	/* vamos a pedirle al usuario que ingrese un numero, 
	debemos "desarmarlo" y retornar la suma de cada uno de sus digitos*/
	
	int numero, suma = 0;
	cout << "Ingresa un numero: ";
	cin >> numero;
	
	while(numero > 0){
		suma += n%10;	// %10 nos ayuda a extraer el ultimo digito de un numero
		
		n /= 10;	// /= 10 nos ayuda a recortar el ultimo digito del numero 
	}
	
	cout << "Suma de los digitos: " << suma;
	
	return 0;
}

