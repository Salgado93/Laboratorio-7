
#include "soldado.h"
#include "coraza.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Coraza::Coraza(string nombre, string ciudad, int edad, int dureza, int cantLanzas)
	:Soldado(nombre, ciudad, edad),dureza(dureza), cantLanzas(cantLanzas){
}
Coraza::~Coraza(){
}
string Coraza::toString()const{
	stringstream ss;
	ss << "Coraza: ";
	return ss.str();
}


