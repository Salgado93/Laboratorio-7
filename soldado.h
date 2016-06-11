#pragma once
#include <string>
using std::string;

class Soldado{
	string nombre;
	string ciudad;
	int edad;
	
  public:
	Soldado(string, string, int);
	virtual ~Soldado();
	virtual string toString()const;
	
};
