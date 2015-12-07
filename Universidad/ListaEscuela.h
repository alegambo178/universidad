#pragma once
#include "NodoEscuela.h"


class ListaEscuela{
private:
	NodoEscuela* ptrNodoInicio;

public:
	ListaEscuela();
	void insertarDatoNodo_Inicio(Escuela*);
	bool insertarDatoNodo_Final(Escuela*);
	string toString();
	~ListaEscuela();
};