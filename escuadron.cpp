#include "escuadron.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Escuadron::Escuadron(string nombre, vector listSoldado){
	this -> nombre = nombre;
	this -> listSoldado = listSoldado;
}
Soldado::~Escuadron(){
}
string Escuadron::toString()const{
	stringstream ss;
	ss << "Escuadron: " << this;
	return ss.str();
}
