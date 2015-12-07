#include "Escuela.h"


Escuela::Escuela(){
nombre= "Sin definir";
}

Escuela:: Escuela(string nom){
	nombre= nom;
}

string Escuela:: getNombre(){
	return nombre;
}

void Escuela:: setNombre(string nom){
	nombre= nom;
}

string Escuela:: toString(){  //Imprime el nommbre de la escuela
	stringstream s;
	s<<"Escuela de "<<nombre<<endl;
	s<<endl;
	return s.str();
}

Escuela::~Escuela(){
}
