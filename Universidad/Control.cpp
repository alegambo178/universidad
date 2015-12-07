#include "Control.h"


Control::Control(){
}

void Control:: mostrarInterfaz(){
	int opcion2;
	color(27);   
	cout<<"*-*-*-*-*-*BIENVENIDO*-*-*-*-*-*"<<endl;    
	cout<<"*-*-*-*AL SISTEMA DE MATRICULA*-*-*-*"<<endl;
	cout<<endl; 
	int opcion;
	color(11); //verde 2
	this->mostrarMenu();
	cin>>opcion;
	color(9);
	this->comenzar(opcion); //ejecuta la opcion
	if(opcion!=5){
	color(2);
	this->mostrarSubMenu();
	cin>>opcion2;
	system("cls");

	
	if(opcion2==2){  //si la opcion ingresada es la 2 el sistema se sale
		color(4);
		cout<<"Gracias por utilizar la aplicacion"<<endl;
		cin.get();
	}


	while(opcion2==1){  //Mientras la opcion en el subMenu igual sea igual a 1, el sistema volverá a mostrar el menú principal.
		system("cls");
		int opcion;
		color(11);
		this->mostrarMenu();
		cin>>opcion;
		color(9);
		this->comenzar(opcion); //ejecuta la opcion
		color(2);
			if(opcion!=5){
			this->mostrarSubMenu();
			cin>>opcion2;

				if(opcion2==2){
					color(4);
					cout<<"Gracias por utilizar la aplicacion"<<endl;
					system("pause");
				}
			}


	}
	}
	
}

Control::~Control(){
}
