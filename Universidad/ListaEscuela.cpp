#include "ListaEscuela.h"

ListaEscuela::ListaEscuela(){
	ptrNodoInicio = NULL;
}

void ListaEscuela::insertarDatoNodo_Inicio(Escuela* dato){  
	ptrNodoInicio = new NodoEscuela(dato,ptrNodoInicio);
}

bool ListaEscuela::insertarDatoNodo_Final(Escuela* dato){  //Este método se encarga de insertar la escuela en la lista, es de tipo booleano ya que si la escuela no se ingresa deberá retornar falso
	bool bandera= false;
	if(ptrNodoInicio == NULL){
		ptrNodoInicio = new NodoEscuela(dato,NULL);
		bandera= true;
	}
	else
	{
		NodoEscuela* ptrSig = ptrNodoInicio;
		while (ptrSig->getPtrNodoEscuelaSig()!=NULL){
			ptrSig = ptrSig->getPtrNodoEscuelaSig();
		}
		ptrSig->setPtrNodoEscuelaSig(new NodoEscuela(dato,NULL));
		bandera= true;
	}
	return bandera;
}

string ListaEscuela::toString(){  //Este método se encarga de mostrar todas las escuelas existentes en la Universidad  
	stringstream s;
	NodoEscuela* ptrTempEsc = ptrNodoInicio;
	while (ptrTempEsc!=NULL){
		s<<ptrTempEsc->toString()<<endl;
		ptrTempEsc = ptrTempEsc->getPtrNodoEscuelaSig();
	}	
	return s.str();
}

ListaEscuela::~ListaEscuela(){  //Método que se encarga de borrar cada una de las escuelas para liberar memoria
	NodoEscuela* ptrTempEsc = ptrNodoInicio;
	while (ptrNodoInicio!=NULL){
		ptrTempEsc = ptrNodoInicio;
		ptrNodoInicio = ptrTempEsc->getPtrNodoEscuelaSig();
		delete ptrTempEsc;
	}
}

