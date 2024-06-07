#include "../include/class/usuario.h"
#include <iostream>
#include <map>
//#include <algorithm>
#include "../include/class/comentario.h"
using namespace std;

// Constructor
Usuario::Usuario(string n,  string p, DTFecha  f, bool c){
	nickname=n;
	fecha=f;
	contrasena=p;
	cliente=c;
}


// Getters
string Usuario::getNickname(){
	return nickname;
}

string Usuario::getContrasena(){
	return contrasena;
}

DTFecha Usuario::getFecha(){
	return fecha;
}

bool Usuario::esCliente(){
	return cliente;
}

// Cometnarios

void Usuario::listarComentarios(){
	for(auto&comentario: comentarios){
		comentario.second->mostrar();
	}
}

void Usuario::agregarComentario(Comentario * comentarioNuevo){
	comentarios.insert(make_pair(comentarioNuevo->getId(),comentarioNuevo));
}

void Usuario::eliminarComentario(Comentario * comentarioAEliminar){
	comentarios.erase(comentarioAEliminar->getId());
}






// Otros
void Usuario::mostrar(){
	cout<<"Nombre: "<<getNickname()<<endl;
	cout<<"contrasena: "<<getContrasena()<<endl;
	cout<<"Tipo de Usuario: ";
	if(esCliente()){
		cout<<"Es cliente"<<endl;
	}
	else{
		cout<<"Es vendedor"<<endl;
	}
	cout<<"Fecha: "<<fecha.toString()<<endl;
}











