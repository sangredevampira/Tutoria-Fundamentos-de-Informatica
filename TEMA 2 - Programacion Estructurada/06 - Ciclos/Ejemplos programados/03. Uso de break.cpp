#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	string contrasenna;
	
	while(contrasenna != "123"){
		
		cout << "Ingresa la contrasenna: ";
		cin >> contrasenna;
		
		if(contrasenna == "123"){
			break;
		}
	}
	
	cout << "Contrasena correcta. Feliz inicio de sesion";
	
	return 0;
}

