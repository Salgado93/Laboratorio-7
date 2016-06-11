#include "arquero.h"
#include "soldado.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Arquero::Arquero(string nombre, string ciudad, int edad, int cantidadFlechas, double precision)
	:Soldado(nombre, ciudad, edad),cantidadFlechas(cantidadFlechas), precision(precision){
}
string Arquero::toString()const{
	stringstream ss;
	ss << "Arquero: ";
	return ss.str();
}


