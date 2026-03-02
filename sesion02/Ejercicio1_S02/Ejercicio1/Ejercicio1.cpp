
#include "Ejercicio1.h"
using namespace std;

double Promedio(int numeros[]) {
	double promedio = 0;

	for (int i = 0; i < 10; i++) {

		promedio= promedio+ numeros[i];

	}
	return promedio/10;
}






int SumarElementos(int numeros[]) {
	int sumatoria =0;  // inicia en 0
	for (int i = 0; i < 10; i++) { 
		sumatoria = sumatoria + numeros[i]; // va haciendo la suma de todos lods elementos
	}
	return sumatoria;

}


int valorMenor(int numeros[]) {

	int menor = numeros[0];  //a menor le asignamos el primer valor ingresado en el arreglo

	for (int i = 0; i < 10; i++) {

		if (numeros[i] < menor) {
			menor = numeros[i];
		}


	}

	return menor;

}


int valorMayor(int numeros[]) {
	int mayor = numeros[0];  //a mayor le asignamos el primer valor ingresado en el arreglo
	for (int i=0; i < 10;  i++) {

		if (numeros[i] > mayor) {
			mayor = numeros[i];

		}
}
	return mayor;

}


