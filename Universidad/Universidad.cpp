#include "Universidad.h"


Universidad::Universidad(){
	nombre= "Universidad Nacional";
	direccion= "Sin definir";
	telefono= "Sin definir";
	escuelas= new ListaEscuela();   //se inicializa la lista de escuelas, de la que esta compuesta la Universidad
}

Universidad::Universidad(string dir, string tel){
	nombre= "Universidad Nacional";
	direccion= dir;
	telefono= tel;
	escuelas= new ListaEscuela();  //se inicializa la lista de escuelas, de la que esta compuesta la Universidad
}

string Universidad:: getNombre(){
	return nombre;
}

string Universidad:: getDireccion(){
	return direccion;
}

string Universidad:: getTelefono(){
	return telefono;
}

void Universidad:: setDireccion(string dir){
	direccion= dir;
}

void Universidad:: setTelefono(string tel){
	telefono= tel;
}

bool Universidad:: insertarEscuela(Escuela* esc){   //Este método se encarga de insertar cada escuela en la lista, es de 
	bool bandera= false;							//tipo booleano ya que si la escuela no se almacena deberá retornar un falso, de lo
	if(escuelas->insertarDatoNodo_Final(esc))		//contrario indicará que se ha ingresado la escuela correctamente
		bandera= true;								
	return bandera;
}

string Universidad:: toString(){  //Este método se encarga solo de mostrar la inforrmacion de la Universidad
	stringstream s;
	s<<endl<<endl;
	s<<"**DATOS DE LA UNIVERSIDAD**"<<endl;
	s<<"Nombre: "<<nombre<<endl;
	s<<"Direccion: "<<direccion<<endl;
	s<<"Telefono: "<<telefono<<endl<<endl;
	return s.str();
}

string Universidad::toStringEscuelas(){  //Este método se encarga de imprimir solo las escuelas registradas
	stringstream s;
	s<<escuelas->toString()<<endl;
	return s.str();
}

Universidad::~Universidad(){

}
