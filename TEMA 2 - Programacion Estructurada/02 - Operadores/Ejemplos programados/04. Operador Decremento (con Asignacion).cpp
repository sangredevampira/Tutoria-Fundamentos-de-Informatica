#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int a = 20, b;
	
	b = a--; // primero b guarda el valor original de a, luego se modifica el valor de a restandole 1
	
	cout << "a: " << a << "\n"
		<< "b: " << b;
	
	
	return 0;
}

