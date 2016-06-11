#pragma once
#include "soldado.h"
#include <string>
#include <sstream>
using std::string;

class Arquero : public Soldado{
	int cantidadFlechas;
	double precision;
  public:
	Arquero(string, string, int, int,double=0.0);
	virtual ~Arquero();
	string toString()const;

};
