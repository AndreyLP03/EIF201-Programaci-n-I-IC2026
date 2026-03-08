
#include <iostream>
#include "paquetes.h"
int main()
{
    
    int cantidad = 0;
    double limite = 0.0;
    double* registroPesos = crearRegistro(cantidad);

    ingresarPesos(registroPesos, cantidad);

    std::cout << "-------Ingrese el Peso Maximo (kg): ";
    std::cin >> limite;

    double* resultados = calcularPESOTOTAL(registroPesos, cantidad);
    int sobreLimite = contarSobrelimite(registroPesos, cantidad, limite);
    const double* MPesado = buscarMasPesado(registroPesos, cantidad);

    
    std::cout << "|------------RESULTADOS---------------------------------------|" << std::endl;
    std::cout << "Peso Total: " << resultados [0]<< std::endl;
    std::cout << "Promedio: " << resultados [1]<< std::endl;
    std::cout << "Paquetes con Sobre limite: " << sobreLimite << std::endl;
    std::cout << "Paquete mas Pesado: " << *MPesado << std::endl;




    delete [] registroPesos;
    delete [] resultados;
   
}
