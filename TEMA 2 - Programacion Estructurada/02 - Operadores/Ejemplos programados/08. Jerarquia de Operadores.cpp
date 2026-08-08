#include <iostream>
using namespace std;

int main() {
	
	int n = 10;
	float resultado = 0;
	
	resultado = (2 + n * 5) / ((n - 5) * 10); 
	// En este caso se resuelve primero n * 5, porque * tiene mayor prioridad que +
	
	cout << resultado;
	
	return 0;
}

