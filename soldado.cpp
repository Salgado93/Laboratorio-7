#include "soldado.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Soldado::Soldado(string nombre, string ciudad , int edad){
	this -> nombre = nombre;
	this -> ciudad = ciudad;
	this -> edad = edad;
}
Soldado::~Soldado(){
}
string Soldado::toString()const{
	stringstream ss;
	ss << "Soldado: " << this;
	return ss.str();
}



