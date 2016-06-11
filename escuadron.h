#pragma once
#include "soldado.h" 
#include <string>
#include <vector>
using namespace std;
using std::string;

class Escuadron{
	string nombre;
	vector <Soldado*> soldadoList;
 public:
	Escuadron(string);
	string toString()const;

	

};
