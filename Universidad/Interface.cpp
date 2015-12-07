#include "Interface.h"

Universidad* universidad = new Universidad;
Escuela* escuela= new Escuela();

Interface::Interface(){
}

void Interface::color(int X) { //Este metodo se encarga de darle color al texto, según el numero que se ingrese cambia el color
SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),X); 
} 

//ingresarDatosUniversidad: se encarga de solicitar al usuario los datos de la universidad.
void Interface:: ingresarDatosUniversidad(){
	string dir, tel;
	system("cls");
	cout<<"Ingrese la direccion exacta de la universidad: ";
	color(9);
	cin>>dir;
	//while(!validarStringConEspacios(dir)){   //Tiene que ser un entero, q hago??
	//	cout<<"Ha ingresado un dato erroneo, por favor vuelva a intentarlo"<<endl;
	//	cin>>dir;
	//}
	universidad->setDireccion(dir);
	cout<<endl;
	color(11);
	cout<<"Ingrese el numero de telefono de la universidad: ";
	cin>>tel;
	cout<<endl;
	universidad->setTelefono(tel);
	color(3);
	cout<<"Los datos ingresados son los siguientes"<<endl;
	cout<<universidad->toString()<<endl;
	cout<<endl<<endl<<endl<<endl;
}

//actualizarDatosUniversidad se encarga de cambiar los datos de la universidad por los nuevos datos que ingrese el usuario
void Interface:: actualizarDatosUniversidad(){
	string dire, tele;
	system("cls");
	cout<<"La direccion actual es: "<<universidad->getDireccion()<<endl;
	cout<<"Ingrese la nueva direccion de la universidad: ";
	cin>>dire;
	universidad->setDireccion(dire);
	cout<<"El numero de telefono actual es: "<<universidad->getTelefono()<<endl;
	cout<<"Ingrese el  nuevo numero de telefono de la universidad: ";
	cin>>tele;
	universidad->setTelefono(tele);
	cout<<endl;
	cout<<"La informacion se ha cambiado corectamente!!!"<<endl;
	cout<<universidad->toString()<<endl;
	cout<<endl<<endl<<endl<<endl;
}
void Interface::mostrarMenu(){  //Este metodo muestra el menú principal
	cout<<"Escoja una opcion"<<endl;
	cout<<"1. Ingresar datos de la Universidad"<<endl;
	cout<<"2. Actualizar datos de la Universidad"<<endl;
	cout<<"3. Registrar nueva Escuela o Departamento"<<endl;
	cout<<"4. Consultar lista de Escuelas o Departamentos"<<endl;
	cout<<"5. Salir"<<endl;
}
void Interface::comenzar(int opc){
	if(opc==1){
		this->ingresarDatosUniversidad();
	}
	else
		if(opc==2){
			this->actualizarDatosUniversidad();
	
		}
		else
			if(opc==3){
				this->registrarDatosNuevaEscuela();
				
			}
			else
				if(opc==4){
					this->consultarRegistro();

				}
				else
					if(opc==5){
					cout<<"Gracias por utilizar la aplicacion"<<endl;
					system("pause");
					}
}

//mostrarSubMenu: muestra un submenu 
void Interface::mostrarSubMenu(){
	cout<<"Digite "<<endl;
	cout<<"1:  si desea volver al menu principal"<<endl;
	cout<<"2:  si desea salir"<<endl;
}

//Pide al usuario los datos de la escuela, la crea y la  inserta en la Universidad
void Interface:: registrarDatosNuevaEscuela(){
	string escu;
		system("cls");
		cout<<"Ingrese el nombre de la escuela: ";
		cin>>escu;
		cout<<endl;
		Escuela *e1=new Escuela();
		
		if(universidad->insertarEscuela(escuela))
		cout<<"La escuela se ha registrado correctamente!!"<<endl;
		else
			cout<<"La escuela no se ha registrado correctamente!"<<endl;
		cout<<endl<<endl<<endl<<endl;
}

//consultarRegistro: muestra todas las escuelas ingresadas en la Universidad
void Interface:: consultarRegistro(){
	system("cls");
	cout<<universidad->toString();
	cout<<"*   *   *   *   *   *LISTA DE ESCUELAS "<<universidad->getNombre()<<"*   *   *   *   *   *"<<endl<<endl;
	cout<<universidad->toStringEscuelas()<<endl;
}

//Este metodo se encarga de realizar las validaciones para los datos ingresados, verificando que los métodos ingresados sean los correctos
bool validarStringConEspacios(int dato){
	if(!isalnum(dato))
		return true;
	else
		return false;
	/*bool bandera= false;
	if(isprint(dato))
		bandera= true;
	return bandera;*/
}

Interface::~Interface(){
}
