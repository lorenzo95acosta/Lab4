#ifndef _CLIENTE_H_
#define _CLIENTE_H_

#include "usuario.h"
#include "../datatype/DTFecha.h"
//#include "vendedor.h"
#include <iostream>
#include <vector>

using namespace std;

class Vendedor;

class Cliente : public Usuario{
private:
	string direccion;
	string ciudad;
public:
	Cliente(string,string,DTFecha,bool,string,string);
	vector<Vendedor*> listaSuscripciones;
	void agregarSuscripcion(Vendedor*);
	void listarSuscripciones();
	void eliminarSuscripciones(Vendedor*);

};

#include "vendedor.h"


#endif
