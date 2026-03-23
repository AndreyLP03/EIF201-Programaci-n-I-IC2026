#ifndef VEHICULO_H
#define VEHICULO_H
#include<string>
#include<iostream>
namespace UNA {

	class Vehiculo {
	private:
	
		std::string placa;
		std::string marca;
		int anio;
		double kilometraje;
		bool activo;

	public:
		//constructor
		Vehiculo(std::string Placa, std::string Marca, int Anio, double Kilometraje);

		//getters
		std::string getPlaca() const;
		std::string getMarca() const;
		int getAnio() const;
		double getKilometraje() const;
		bool getActivo() const;

		//metodos
		void registrarKilometros(double km);
		void desactivar();
		void reactivar();
		void mostrar() const;


	};



}





#endif









