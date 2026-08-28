#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	for(int i = 1; i <= 5; i++){ // este for lleva control de las veces que vamos a imprimir
		for(int j = 1; j <= 10; j++){// el bloque del for interno
			cout << j << endl;
		}
		cout << "-----" << endl;
	}
	
	
	return 0;
}

