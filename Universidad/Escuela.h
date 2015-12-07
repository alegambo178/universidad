#pragma once
#include <iostream>
#include <sstream>
#include <typeinfo.h> 

using namespace std;

class Escuela{

private:
	string nombre;
public:
	Escuela();
	Escuela(string);
	string getNombre();
	void setNombre(string);
	string toString();
	~Escuela();
};

