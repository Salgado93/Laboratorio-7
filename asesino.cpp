#include "soldado.h"
#include "asesino.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Asesino::Asesino(string nombre, string ciudad, int edad, int cantidadAsesinatos, double sigilo)
	:Soldado(nombre, ciudad, edad),cantidadAsesinatos(cantidadAsesinatos), sigilo(sigilo){
}
Asesino::~Asesino(){
}
string Asesino::toString()const{
	stringstream ss;
	ss << "Asesino: ";
	return ss.str();
}

