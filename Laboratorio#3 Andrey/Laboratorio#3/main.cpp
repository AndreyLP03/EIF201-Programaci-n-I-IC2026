
#include <iostream>
#include "Flota.h"
#include "Vehiculo.h"

using namespace UNA;

int main()
{

	Flota  Flotavehiculos;
	int opcion = 0;
	int anio = 0;
	std::string placa;
	std::string marca;
	double km = 0.0;


	do {

		std::cout << "\n========== FLOTA EXPRESS ==========" << std::endl;
		std::cout << "1. Registrar Vehiculo" << std::endl;
		std::cout << "2. Buscar por Placa" << std::endl;
		std::cout << "3. Mostrar por Marca" << std::endl;
		std::cout << "4. Registrar Kilometros" << std::endl;
		std::cout << "5. Desactivar Vehiculo" << std::endl;
		std::cout << "6. Reactivar Vehiculo" << std::endl;
		std::cout << "7. Eliminar Vehiculo" << std::endl;
		std::cout << "8. Mostrar Todos los Vehiculos" << std::endl;
		std::cout << "9. Contar Todos los Vehiculos activos" << std::endl;
		std::cout << "10. Salir" << std::endl;
		std::cout << "Seleccione una opcion: ";
		std::cin >> opcion;


		std::cin.ignore();






		switch (opcion) {


		case 1: {


			std::cout << "---|--------REGISTRAR------------|---" << std::endl;

			std::cout << " Ingrese la Placa: " << std::endl;
			std::getline(std::cin, placa);
			std::cout << " Ingrese la Marca: " << std::endl;
			std::getline(std::cin, marca);
			std::cout << " Ingrese el Anio: " << std::endl;
			std::cin >> anio;
			std::cout << " Ingrese el Kilometraje: " << std::endl;
			std::cin >> km;

			Vehiculo* nuevo = new Vehiculo(placa, marca, anio, km);
			Flotavehiculos.agregar(nuevo);

			break;
		}
		case 2: {
			std::cout << "---|-----BUSCAR VEHICULO POR PLACA------------|---" << std::endl;

			std::cout << "Ingrese la Placa del Vehiculo: ";
			std::getline(std::cin, placa);

			Vehiculo* v = Flotavehiculos.buscarPorPlaca(placa);

			if (v != nullptr) {
				v->mostrar();

			}
			else {
				std::cout << " No existe ! ......." << std::endl;
			}

			break;
		}

		case 3: {
			std::cout << "---|-----BUSCAR VEHICULO POR MARCA------------|---" << std::endl;

			std::cout << "Ingrese la Marca del Vehiculo: ";
			std::getline(std::cin, marca);

			Flotavehiculos.mostrarPorMarca(marca);

			break;
		}
		case 4: {

			std::cout << "---|-----REGISTRAR KILOMETROS------------|---" << std::endl;

			std::cout << "Ingrese la Placa: ";
			std::getline(std::cin,placa);

			Vehiculo* v = Flotavehiculos.buscarPorPlaca(placa);


			if (v != nullptr) {

				std::cout << "Ingrese los Kilometros a Registrar: " << std::endl;
				std::cin >> km;

				v->registrarKilometros(km);
				std::cout << " Kilometraje actualizado....." << std::endl;
			}
			else {
				std::cout << " Nose pudo actualizar el kilometraje....." << std::endl;
			}

			break;
		}
		case 5: {
			std::cout << "---|-----DESACTIVAR VEHICULO------------|---" << std::endl;

			std::cout << "Ingrese la Placa: ";
			std::getline(std::cin, placa);

			Vehiculo* v = Flotavehiculos.buscarPorPlaca(placa);

			if (v != nullptr) {
				v->desactivar();
			}
			else {
				std::cout << "Vehiculo no encontrado......" << std::endl;
			}


			break;
		}
		case 6: {

			std::cout << "---|-----REACTIVAR VEHICULO------------|---" << std::endl;

			std::cout << "Ingrese la Placa: ";
			std::getline(std::cin, placa);

			Vehiculo* v = Flotavehiculos.buscarPorPlaca(placa);

			if (v != nullptr) {
				v->reactivar();
			}
			else {
				std::cout << " No se pudo reactivar...." << std::endl;
			}


			break;
		}
		case 7: {
			std::cout << "---|-----ELIMINAR VEHICULO------------|---" << std::endl;

			std::cout << " Ingresa la Placa : ";
			std::getline(std::cin, placa);

			bool eliminacion = Flotavehiculos.eliminar(placa);

			if (eliminacion == true) {
				std::cout << "  El Vehiculo de placa: " << placa << " ha sido eliminado con exito...." << std::endl;


			}

			break;
		}
		case 8:

			Flotavehiculos.mostrarTodos();


			break;
		case 9:


			std::cout << " El total de Vehiculos Activos es de: " << Flotavehiculos.contarActivos() << std::endl;;

			break;
			 
		case 10 :
			break;

		default:

			std::cout << "# Opcion invalida !--------" << std::endl;

		}

	} while (opcion != 10);

	
	return 0;
}

 