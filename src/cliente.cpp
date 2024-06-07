#include "../include/class/cliente.h"
#include "../include/datatype/DTFecha.h"
#include <iostream>
#include <algorithm>
using namespace std;


Cliente::Cliente (string n ,string p,DTFecha f,bool c,string d,string cd):Usuario(n,p,f,c){
	direccion=d;
	ciudad=cd;
}



// Suscripciones: Agregar, listar, eliminar
void Cliente::agregarSuscripcion(Vendedor * vendedorASuscribir){
	listaSuscripciones.push_back(vendedorASuscribir);
}

void Cliente::listarSuscripciones(){
	for(Vendedor * vendedorSuscripto: listaSuscripciones){
		vendedorSuscripto->mostrar();
	}
}

// Se usa find de Algorithm aca
void Cliente::eliminarSuscripciones(Vendedor* vendedorABorrar){
	auto posVendedor= find(listaSuscripciones.begin(), listaSuscripciones.end(), vendedorABorrar);
	if(posVendedor != listaSuscripciones.end()){
		listaSuscripciones.erase(posVendedor);
	}
	else{
		cout<<"El Cliente no estaba suscripto a ese vendedor!"<<endl;
	}
}
