#pragma once
#include "Universidad.h"
#include <Windows.h>
#include <ctype.h>

class Interface{

public:
	Interface();
	virtual void mostrarInterfaz()=0;  //Este método se hereda a la clase interfaz y se implementa solo en en la clase control 
	void mostrarMenu();
	void mostrarSubMenu();
	void comenzar(int);
	bool validarStringConEspacios(int);
	void ingresarDatosUniversidad();
	void actualizarDatosUniversidad();
	void registrarDatosNuevaEscuela();
	void consultarRegistro();
	virtual void color(int);
	~Interface();

};

