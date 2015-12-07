#pragma once
#include "ListaEscuela.h"



class Universidad{

private:
	string nombre;
	string direccion;
	string telefono;   //lo hacemos un string ya que es un atributo que no se va a modificar(sumar, multiplicar, dividir...)
	ListaEscuela* escuelas;   
	//Universidad tiene una composicion de escuelas y esto se indica con el atributo anterior
	
public:
	Universidad();
	Universidad(string, string);
	string getNombre();
	string getDireccion();
	string getTelefono();
	void setDireccion(string);
	void setTelefono(string);
	bool insertarEscuela(Escuela*);
	string toString();
	string toStringEscuelas();
	~Universidad();
};
