
#include "Ejercicio3_02.h"
using namespace std;


void sumaDiagonal(int matriz[FILAS][COLS], int FILAS, int COLS) {

	int suma = 0;
	for (int i = 0; i < FILAS; i++) {
		suma = suma + matriz[i][i];
	}

	cout << " \nLa suma de la Diagonal de la matriz es:  " << suma << endl;

}



void sumaColumnas(int matriz[FILAS][COLS], int FILAS, int COLS) {
	
	for (int j = 0; j < COLS; j++) {
		int suma = 0;
		for (int i = 0; i < FILAS; i++) {

			suma = suma + matriz[i][j];

		}
		cout << "\nSumas de cada Columna : " << endl << "Columna[ " << j << "]" << " = " << suma << endl;
	}

}




void sumaFilas(int matriz[FILAS][COLS],int FILAS, int COLS) {

	for (int i = 0; i < FILAS; i++) {
		int suma = 0;
		for (int j = 0; j < COLS; j++) {

			suma = suma + matriz[i][j];

		}
		
		cout << "\nSumas de cada Fila: " << endl << "Fila[ " << i << "]" << " = " << suma << endl;
	}
	
}


void LeerMatriz(int matriz[FILAS][COLS], int FILAS, int COLS) {

	for (int i = 0; i < FILAS; i++) {
		for (int j = 0; j < COLS; j++) {

			cin >> matriz[i][j];

		}


	}
}

	void ImprimirMatriz(int matriz[FILAS][COLS], int FILAS, int COLS) {

		for (int i = 0; i < FILAS; i++) {
			for (int j = 0; j < COLS; j++) {

				cout << setw(3)<<matriz[i][j];


			}
			cout << endl;
		}
		

	}





