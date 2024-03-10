#include <iostream>
using namespace std;
//paso1: crear la clase persona
class Persona{
	//crear atributos: nombres, apellidos, direccion, telefono, fecha_nacimiento
	protected : string nombres, apellidos, direccion,fecha_nacimiento;
	
	int telefono;
	//constructor
	Persona(){
	}
	
	Persona(string nom, string ape, string dir, int tel,string fn){
		nombres=nom;
		apellidos=ape;
		direccion=dir;
		telefono=tel;
		fecha_nacimiento=fn;
		
	}
	//metodos crud = crear, leer, actualizar, borrar
	void crear();
	void leer();
	void actualizar();
	void borrar();
	
	
	
	
};
