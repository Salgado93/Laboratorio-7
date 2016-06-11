#pragma once
#include "soldado.h"
#include <string>
using std::string;

class Coraza : public Soldado{
	int dureza;
	int cantLanzas;
  public:
	Coraza(string, string, int, int,int);
	virtual ~Coraza();
	string toString()const;

};
