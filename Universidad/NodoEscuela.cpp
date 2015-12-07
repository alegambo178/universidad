#include "NodoEscuela.h"


NodoEscuela::NodoEscuela(){
	ptrDato= NULL;
	ptrNodoEscuelaSig = NULL;
}

NodoEscuela::NodoEscuela(Escuela* dato, NodoEscuela* NodoEscuelaSig){
	ptrDato= dato;
	ptrNodoEscuelaSig = NodoEscuelaSig;
}

NodoEscuela* NodoEscuela::getPtrNodoEscuelaSig(){
	return ptrNodoEscuelaSig;
}

void NodoEscuela::setPtrNodoEscuelaSig(NodoEscuela* NodoEscuela){
	ptrNodoEscuelaSig = NodoEscuela;
}

string NodoEscuela::toString(){
	return ptrDato !=NULL ? ptrDato->toString() : "" ;
}
/*Esta instruccion es una condicion,pregunta si el ptr dato es distinto de nulo, entonces imprima el toString, 
si no una instruccion en blanco.*/

NodoEscuela::~NodoEscuela(){
	if(ptrDato!=NULL)
		delete ptrDato;
}
