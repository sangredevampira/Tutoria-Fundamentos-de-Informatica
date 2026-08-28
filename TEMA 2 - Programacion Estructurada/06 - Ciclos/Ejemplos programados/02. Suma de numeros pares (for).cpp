#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int n, suma = 0;
	
	cout << "Ingresa el numero limite: ";
	cin >> n;
	
	// suma de numeros pares, desde 1 hasta n
	for(int i = 1; i <= n; i++){
		if(i % 2 == 0){		// comprobamos si i es un numero
			suma += i;
		}
	}
	
	cout << "Resultado: " << suma << endl << endl;
	
	suma = 0;
	for(int i = 2; i <= n; i += 2){
		suma += i;
	}
	
	cout << "Resultado: " << suma << endl << endl;
	
	return 0;
}

