#include "../include/class/cliente.h"
#include "../include/datatype/DTFecha.h"
#include <iostream>
#include <algorithm>
using namespace std;


Vendedor::Vendedor(string n ,string p,DTFecha f,bool c,string _rut):Usuario(n,p,f,c){
	rut = _rut;
}


string getNick();
    DTFecha getNacimiento();
    string getContraseña();
    string getRUT();


void Vendedor::agregarSuscriptor(Cliente * clienteSuscriptor){
	listaSuscriptores.push_back(clienteSuscriptor);
}

void Vendedor::listarSuscriptores(){
	for(Cliente * clienteSuscritos: listaSuscriptores){
		clienteSuscritos->mostrar();
	}
}
