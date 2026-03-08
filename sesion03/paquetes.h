#ifndef paquetes_H
#define paquetes_H
#include <iostream>
// solicita la cantidad de pquetes (debe ser >0 , reserva el arreglo
//con new y retorna el puntero

double* crearRegistro(int& cantidad);


double* ingresarPesos(double* pesos,int cantidad);

double* calcularPESOTOTAL(const double* pesos, int cantidad);

int contarSobrelimite(const double* pesos, int cantidad, double limite);

const double* buscarMasPesado(const double* pesos, int cantidad);



#endif 
