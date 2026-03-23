#include "Vehiculo.h"
#include<iostream>
namespace UNA {
	//constructor

	Vehiculo::Vehiculo(std::string Placa, std::string Marca, int Anio, double Kilometraje) {

		placa = Placa;
		marca = Marca;
		anio = Anio;
		kilometraje = Kilometraje;
		activo = true;
	}

	//getters

	std::string Vehiculo::getPlaca() const {
		return placa;
	}

	std::string Vehiculo::getMarca() const {
		return marca;
	}


	int Vehiculo::getAnio() const {
		return anio;
	}

	double Vehiculo::getKilometraje() const {
		return kilometraje;
	}

	bool Vehiculo::getActivo() const{
		return activo;
	}

	//metodos

	void Vehiculo::registrarKilometros(double km) {

		if (km > 0 && activo) {

			kilometraje = kilometraje + km;


		}
		else if(!activo){
			std::cout << "Error , Vehiculo fuera de servicio......" << std::endl;
		}

	}

	void Vehiculo::desactivar() {
		if (activo) {
			activo = false;

		}
		else {
			std::cout << "Vehiculo fuera de servicio...." << std::endl;
		}


	}


	void Vehiculo::reactivar() {


		if (!activo) {

			activo = true;

		}
		else if (activo) {
			std::cout << " Vehiculo ya esta activo" << std::endl;

		}


	}

	void Vehiculo::mostrar() const {
		

		std::cout << "+----------- INFORMACION DE VEHICULOS----------------+" << std:: endl;
		std::cout << "| Placa : "<<placa << std::endl;
		std::cout << "| MARCA : " <<marca<< std::endl;
		std::cout << "| Anio : " <<anio<< std::endl;
		std::cout << "| Kilometraje : " <<kilometraje<< std::endl;
		std::cout << "| Estado : " << (activo ? "Activo" : "Fuera de Servicio") << std::endl;
		std::cout << "----------------------------------------------------" << std::endl;
	}

}