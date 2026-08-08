#include <iostream>
using namespace std;

int main() {
	
	const float pi = 3.1416;
	float radio = 0, resultado = 0;
	
	cout << "* Ingresa el radio de un circulo: ";
	cin >> radio;
	
	resultado = pi * (radio * radio);
	
	cout << "* Resultado: " << resultado;
	
	return 0;
}

