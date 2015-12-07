#include"Control.h"

int main(){
	Control* control= new Control();
	control->mostrarInterfaz();
	

	delete control;

	cin.get();
	return 0;
};

