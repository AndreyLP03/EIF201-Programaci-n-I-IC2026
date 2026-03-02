#include <iostream>
#include "Ejercicio1.h"
using namespace std;


int main() {



	int numeros[10];

	for (int i = 0; i < 10; i++) {
		cout << " Ingrese un numero: ";
		cin >> numeros[i];

	}
	cout << endl;
	int mayor = valorMayor(numeros);
	int menor = valorMenor(numeros);
	int sumatoria = SumarElementos(numeros);
	double promedio = Promedio(numeros);
	cout << "El numero Mayor es: " << mayor << endl;;
	cout << "El numero Menor es: " << menor << endl;
	cout << "La Suma de todos los numeros es: " << sumatoria << endl;
	cout << "El promedio Aritmetico es: " << promedio << endl;






	return 0;









}