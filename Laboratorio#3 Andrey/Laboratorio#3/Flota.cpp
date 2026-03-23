#include "Flota.h"


namespace UNA {

	//en este archivo habia implementado la clase Flota nuevamente
	//lo cual es un error, ya que ya venia con Flota.h
	Flota::Flota() {
		 capacidad = 3;//para la capacidad del arreglo
		cantidad=0; //para la cantidad actual de vehiculos

		VehiculosAlmacenados = new Vehiculo * [capacidad];
		
		 
	}
		
		
	
		Flota::~Flota() {
		  
			for (int i = 0; i < cantidad; i++) {

				delete VehiculosAlmacenados[i];     //aqui no se pone corchetes porque lo se ocupa es eliminar cada elemento primero

			}
		
			delete[] VehiculosAlmacenados; //aqui se pone corchetes porque ahora si lo que se ocupa es eliminar todo el arreglo
		
		}

		void Flota::agregar(Vehiculo* nuevo) {
			if (cantidad == capacidad) {
				int Ncapacidad = capacidad * 2;

				Vehiculo** temporal;
				temporal = new Vehiculo * [Ncapacidad];

				for (int i = 0; i < capacidad; i++) {
					temporal[i] = VehiculosAlmacenados[i];


				}


				delete[] VehiculosAlmacenados;
				VehiculosAlmacenados = temporal;
				capacidad = Ncapacidad;
		  }

			VehiculosAlmacenados[cantidad] = nuevo;
			cantidad++;
		
		};
		Vehiculo* Flota::buscarPorPlaca(std::string placa) {
		
			for (int i = 0; i < cantidad; i++) {

				if (VehiculosAlmacenados[i]->getPlaca() == placa) {



					return VehiculosAlmacenados[i];
				}
				

			}

			return nullptr;
		}
		void Flota::mostrarPorMarca(std::string marca) const{
			int contador = 0;
			for (int i = 0; i < cantidad; i++) {

				if (VehiculosAlmacenados[i]->getMarca() == marca) {

					contador++;
					VehiculosAlmacenados[i]->mostrar();

				}

				
			}
			std::cout<<std::endl;

			if (contador == 0) {
				std::cout << "No se encontraron Vehiculos con la marca : " << marca << std::endl;

			}
			else {
				std::cout << "Se Encontraron : " << contador << " Vehiculos con la marca "<<marca << std::endl;
			}
		}



		bool Flota::eliminar(std::string placa) {

			int indice = -1;
			for (int i = 0; i < cantidad; i++) {

				if (VehiculosAlmacenados[i]->getPlaca() == placa) {

					indice = i;

					break;
				}
				

			}

			if (indice == -1) {
				std::cout << "Placa no encontrada....."<<std::endl;
				return false;
			}
			else if (VehiculosAlmacenados[indice]->getActivo() ==true) {

				std::cout << " No puede eliminar el vehiculo ya que esta ACTIVO...."<<std::endl;
				return false;
			}

			delete VehiculosAlmacenados[indice];

			for (int j = indice; j < cantidad - 1; j++) {

				VehiculosAlmacenados[j] = VehiculosAlmacenados[j + 1];


			}
			cantidad = cantidad - 1;
			return true;
		
		}


		int Flota::contarActivos() const{
			int contadorA = 0;
			for (int i = 0; i < cantidad; i++) {


				if (VehiculosAlmacenados[i]->getActivo() == true) {

					contadorA++;

				}

			}
			return contadorA;
		}


		void Flota::mostrarTodos() const{
		
			for (int i = 0; i < cantidad; i++) {

				VehiculosAlmacenados[i]->mostrar();
			}

		
		}

	




}
