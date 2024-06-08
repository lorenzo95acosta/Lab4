#include "../include/class/cliente.h"
#include "../include/datatype/DTFecha.h"
#include <iostream>
#include <algorithm>
using namespace std;


Vendedor::Vendedor (string n ,string p,DTFecha f,bool c,string d,string cd):Usuario(n,p,f,c){
	direccion=d;
	ciudad=cd;
}


string getNick();
    DTFecha getNacimiento();
    string getContraseña();
    string getRUT();


Suscripciones: Agregar, listar, eliminar
void Vendedor::agregarSuscriptor(Cliente * clienteSuscriptor){
	listaSuscriptores.push_back(clienteSuscriptor);
}

void Vendedor::listarSuscriptores(){
	for(Cliente * clienteSuscritos: listaSuscriptores){
		clienteSuscritos->mostrar();
	}
}

// IMPLEMENTAR SIN algorithm
// void Vendedor::eliminarSuscriptor(Cliente* clienteABorrar){
// 	auto posCliente= find(listaSuscriptores.begin(), listaSuscriptores.end(), clienteABorrar);
// 	if(posCliente != listaSuscriptores.end()){
// 		listaSuscriptores.erase(posCliente);
// 	}
// }
