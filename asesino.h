#pragma once
#include "soldado.h"
#include <string>
using std::string;

class Asesino : public Soldado{
	int cantidadAsesinatos;
	int sigilo;
  public:
	Asesino(string, string, int, int,int);
	virtual ~Asesino();
	string toString()const;

};
