#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int i = 30;
	int j = 23;
	
	cout << "[(i <= j) || (i == 100)]: " << ((i <= j) || (i == 100)) << endl;

	cout << "[(j - 6 < i) && (i * 2 > j)]: " << ((j - 6 < i) && (i * 2 > j));
	
	/* podemos evaluar expresiones mas grandes, para esto se sigue el orden
	de la jerarquia de operadores, primero se resuelven los parentesis mas
	pequeños, dentro de ellos las expresiones aritmeticas, luego los operadores
	relacionales (<, >, etc) y de ultimo los operadores logicos (||, &&, etc)*/
	
	return 0;
}

