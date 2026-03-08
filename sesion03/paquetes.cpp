#include "paquetes.h"

double* crearRegistro(int& cantidad) {

	do {


		std::cout << "Ingrese la cantidad de paquetes a registrar: ";
		std::cin >> cantidad;

		if (cantidad <= 0) {
			std::cout << " Error la cantidad debe ser mayor a 0 " << std::endl;
		}


	} while (cantidad <=0);

	double* paquetes = new double[cantidad];

	return paquetes;
}



double* ingresarPesos(double* pesos, int cantidad) {

	for (int i = 0; i < cantidad; i++) {

		std::cout << " Ingrese el peso del paquete: ";
		std::cin >> pesos[i];



	}

	return pesos;
}


double* calcularPESOTOTAL(const double* pesos, int cantidad) {

	double suma = 0.0;
	double promedio = 0.0;
	for (int i = 0; i < cantidad; i++) {

		suma = suma + pesos[i];
		
	}

	promedio = suma / cantidad;

	double* resultado = new double[2];
	resultado[0] = suma;
	resultado[1] = promedio;

	return resultado;
}


int contarSobrelimite(const double* pesos, int cantidad, double limite) {

	int contador = 0;

	for (int i = 0; i < cantidad; i++) {

		if (pesos[i] > limite) {
			contador++;
		}


	}

	return contador;

}

const double* buscarMasPesado(const double* pesos, int cantidad) {

	const double* paquetePesado = &pesos[0];

	for (int i = 0; i < cantidad; i++) {

		if (pesos[i] > *paquetePesado) {

			paquetePesado = &pesos[i];

		}


	}


	return paquetePesado;

}