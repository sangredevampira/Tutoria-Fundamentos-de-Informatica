#include <iostream>

#include <cmath>	// debemos incluir esta libreria para usar la funcion pow()
using namespace std;

#define PI 3.1416	// tambien podemos declarar variables constantes de esta manera

int main(int argc, char *argv[]) {
	
	float radio = 0, area = 0;
	
	cout << "Digita el radio del circulo: ";
	cin >> radio;
	
	area = PI * pow(radio, 2); 	// pow(base, exponente), nos permite calcular potencias
	
	cout << "El area del circulo es: " << area;
	
	
	return 0;
}

