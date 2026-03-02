
#include <iostream>
#include<string>
#include<cctype>
using namespace std;


int main()
{
	string palabra;

	cout << "Ingrese su nombre completo: ";
	getline(cin, palabra);
	int i = 0;
	int contadorVocal = 0;
	

	for (int i = 0; i < palabra.length(); i++) {

		char letra = toupper(palabra[i]);

		if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
			contadorVocal++;
		}



	}

	int nombre = palabra.find(" ");
	int apellido = palabra.find(" ", nombre + 1);

	string primerNombre = palabra.substr(0, nombre);
	string primerApellido = palabra.substr(nombre + 1, apellido - (nombre + 1));

	string NombreMayuscula = palabra;
	for (int i = 0; i < NombreMayuscula.length(); i++) {
		NombreMayuscula[i] = toupper(NombreMayuscula[i]);

	}

	cout << " Primer Nombre : " << primerNombre  << endl;
	cout << " Primer Apellido : " << primerApellido << endl;
	cout << " Se encontraron : " << contadorVocal << " vocales" << endl;
	cout << " Nombre Completo: " << NombreMayuscula << endl;
	cout << " Longitud: " <<palabra.length() << endl;


	return 0;

}
