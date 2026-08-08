#include <iostream>
using namespace std;

int main() {
	
	int a = 0, b = 0;
	
	cout << "* Ingresa el primer numero: ";
	cin >> a;
	cout << "* Ingresa el segundo numero: ";
	cin >> b;
	
	cout << "\n-- RESULTADOS --\n"
		<< "* Suma: " << a+b << "\n"
		<< "* Resta: " << a-b << "\n"
		<< "* Multiplicacion: " << a*b << "\n"
		<< "* Division: " << a/b;
	
	return 0;
}

