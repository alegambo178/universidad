#pragma once
#include "Escuela.h"

class NodoEscuela{

private:
	Escuela* ptrDato;
	NodoEscuela* ptrNodoEscuelaSig;

public:
	NodoEscuela();
	NodoEscuela(Escuela*,NodoEscuela*);
	NodoEscuela* getPtrNodoEscuelaSig();
	void setPtrNodoEscuelaSig(NodoEscuela*);
	string toString();
	~NodoEscuela();
};


