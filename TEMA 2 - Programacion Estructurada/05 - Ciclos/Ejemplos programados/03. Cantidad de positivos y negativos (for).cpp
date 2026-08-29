#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int contador, numero;
	cout << "Ingresar cantidad de numeros: ";
	cin >> contador;
	
	// solicitar n numeros, tenemos que indicar cuantos numeros son positivos
	// y cuantos numeros son negativos
	
	int cantidadPositivos = 0, cantidadNegativos = 0;
	
	for(int i = 0; i < contador; i++){ 	// ingresamos numeros cuantas veces indique contador
		cout << "Ingresa un numero: ";
		cin >> numero;
		
		if(numero > 0){
			cantidadPositivos++;
		}else{
			cantidadNegativos++;
		}
	}
	
	cout << "\nCantidad de positivos: " << cantidadPositivos << endl;
	cout << "Cantidad de negativos: " << cantidadNegativos << endl;
	return 0;
}

