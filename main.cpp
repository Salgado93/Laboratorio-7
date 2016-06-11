#include "soldado.h"
#include "arquero.h"
#include "coraza.h"
#include "asesino.h"
#include "escuadron.h"
#include <iostream>
#include <sstream>
using std::cout;
using std::endl;
using std::cin;
using namespace std;
using std::vector;


int main(int argc, char* argv[]){
	int opcion = 0;
	vector<Soldado*> escuadrones; 
	while(opcion != 3){
		cout << "1. Agregar" << endl;
		cout << "2. Simulacion" << endl;
		cout << "3. Salir" << endl;
		cin >> opcion;
		if (opcion == 1){
			int op1=0;
			cout << "Arquero 1" << endl;
			cout << "Coraza  2" << endl;
			cout << "Asesino 3" << endl;
			cin >> op1;
			if(op1 == 1){
				string nombre;
				string ciudad;
				int edad;
				int flechas;
				double precision;
				cout << "Ingrese El Nombre" << endl;
                                cin >> nombre;
                                cout << "Ingrese La Ciudad" << endl;
                                cin >> ciudad;
				cout << "Ingrese La Edad" << endl;
				cin >> edad;
				cout << "Ingrese Las Flechas" << endl;
                                cin >> flechas;
				cout << "Ingrese La Precision" << endl;
				cin >> precision;
				escuadrones.push_back(new Arquero(nombre,ciudad,edad,flechas,precision));
			}
			if(op1 == 2){
				string nombre;
                                string ciudad;
                                int edad;
				int dureza;
				int lanzas;
				cout << "Ingrese El Nombre" << endl;
                                cin >> nombre;
                                cout << "Ingrese La Ciudad" << endl;
                                cin >> ciudad;
                                cout << "Ingrese La Edad" << endl;
                                cin >> edad;
                                cout << "Ingrese La Dureza" << endl;
                                cin >> dureza;
                                cout << "Ingrese Las Lanzas" << endl;
                                cin >> lanzas;
				escuadrones.push_back(new Coraza(nombre,ciudad,edad,dureza,lanzas));
			}
			if(op1 == 3){
				string nombre;
                                string ciudad;
                                int edad;
                                int asesinatos;
                                int sigilo;
                                cout << "Ingrese El Nombre" << endl;
                                cin >> nombre;
                                cout << "Ingrese La Ciudad" << endl;
                                cin >> ciudad;
                                cout << "Ingrese La Edad" << endl;
                                cin >> edad;
                                cout << "Ingrese Cantidad De Asesinatos" << endl;
                                cin >> asesinatos;
                                cout << "Ingrese El Sigilo" << endl;
                                cin >> sigilo;
                                escuadrones.push_back(new Asesino(nombre,ciudad,edad,asesinatos,sigilo));

			}	
		}	
	}


	return 0;
}

