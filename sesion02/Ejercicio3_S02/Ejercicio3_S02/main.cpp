#include<iostream>
#include<iomanip>
#include "Ejercicio3_02.h"
using namespace std;

int main()
{

	const int FILAS = 3;
	const int COLS = 3;
	int matriz[FILAS][COLS];

	LeerMatriz(matriz, FILAS, COLS);
	ImprimirMatriz(matriz, FILAS, COLS);
	sumaFilas(matriz, FILAS, COLS);
	sumaColumnas(matriz, FILAS, COLS);
	sumaDiagonal(matriz, FILAS, COLS);


	return 0;
}

