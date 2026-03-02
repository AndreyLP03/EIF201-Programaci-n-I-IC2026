#include "Ejercicio2_S02.h"
using namespace std;



int main()
{

	int arregloOriginal[20];
	int arregloINV[20];
	int tamano = 0;

	do {
		cout << "Introduzca el numero de elementos que va a contener el arreglo: ";
		cin >> tamano;
		cout << endl;

		if (tamano <= 0 || tamano > 20) {
			cout << "Error valores incorrectos para el limite maximo" << endl;
		}



	} while ((tamano <= 0) || (tamano > 20));


	for (int i = 0; i < tamano; i++) {

		cout << "Ingrese un valor : ";
		cin >> arregloOriginal[i];


	}

	cout << endl;
	//impresion del arreglo original
	for (int i = 0; i < tamano; i++) {

		cout << arregloOriginal[i] << endl;

	}

	ArregloInvertido(arregloOriginal, arregloINV, tamano);

	//impresion del arreglo invertido
	cout << "\n--------IMPRESION DEL ARREGLO ORIGINAL PERO INVERTIDO---------\n";
	for (int i = 0; i < tamano; i++) {

		cout << arregloINV[i] << endl;

	}



	return 0;
}