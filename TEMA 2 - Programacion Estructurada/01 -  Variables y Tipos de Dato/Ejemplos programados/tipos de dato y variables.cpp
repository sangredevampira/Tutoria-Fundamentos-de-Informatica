#include <iostream>
using namespace std;

int main() {
	
	// EJEMPLOS TIPOS DE DATOS EN C++
	
	int edad = 18; 								// numeros enteros
	float promedio = 8.5;						// decimales
	double temperatura = 24.635789098;			// decimales precisos
	char inicial = 'C'; 							// un solo caracter
	string nombreEstudiante = "Javi Granados";// cadena de caracteres (texto)
	bool matriculado = true; 					// verdadero o falso
	
	cout << "-- CONTENIDO DE VARIABLES -- \n\n"
		<< "edad: " << edad << "\n"
		<< "promedio: " << promedio << "\n"
		<< "temperatura: " << temperatura << "\n"
		<< "inicial: " << inicial << "\n"
		<< "nombreEstudiante: " << nombreEstudiante << "\n"
		<< "matriculado: " << matriculado;
	
	/* Diferencias importantes:
	- char usa comillas simples ' '
	- string usa comillas dobles " "
	- bool solo puede ser verdadero o falso */ 
	
	// ---------------------------------------------------------------------------
	
	/* EJEMPLOS DECLARACION DE VARIABLES
	- declarar significa CREAR LA VARIABLE indicando su tipo de dato y nombre */
	
	string profesor;
	int cursosMatriculados; 
	// En este punto las variables existen, pero aún no les hemos asignado un valor
	
	/* EJEMPLOS DE INICIALIZACION DE VARIABLES 
	- incializar significa asignar un valor inicial */
	
	profesor = "Antonio Gomez";
	int cantidadHermanos = 4;		// También podemos declarar e inicializar una variable en una sola línea
	// El símbolo = corresponde al operador de asignación
	
	return 0;
}
	

