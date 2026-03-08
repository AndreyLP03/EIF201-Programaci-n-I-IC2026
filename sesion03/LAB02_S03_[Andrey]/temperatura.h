#ifndef temperatura_H
#define temperatura_H

double* crearRegistro(int& cantidadDias);

void ingresarTemperaturas(double* registro, int cantidad);

double calcularPromedio(const double *registro, int cantidad);

double calcularMaximo(const double* registro, int cantidad);

double calcularMinimo(const double* registro, int cantidad);

void mostrarResultados(const double* registro, int cantidad);





#endif 

