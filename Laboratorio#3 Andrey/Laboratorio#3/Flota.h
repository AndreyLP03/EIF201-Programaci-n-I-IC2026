#ifndef FLOTA_H
#define FLOTA_H

#include "Vehiculo.h"

namespace UNA {


	class Flota {

	private:

		Vehiculo** VehiculosAlmacenados;
		int cantidad; //para la cantidad actual
		int capacidad;  //para la capacidad del arreglo



	public:

		Flota();
		~Flota();

		void agregar(Vehiculo* nuevo);
		Vehiculo* buscarPorPlaca(std::string placa);
		void mostrarPorMarca(std::string marca) const;
		bool eliminar(std::string placa);
		int contarActivos() const;
		void mostrarTodos() const;

	};




}

#endif 









