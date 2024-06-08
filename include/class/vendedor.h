#ifndef _VENDEDOR_H_
#define _VENDEDOR_H_

#include "usuario.h"
#include "../datatype/DTFecha.h"
#include <iostream>
#include "cliente.h"
#include <vector>

using namespace std;

class Vendedor : public Usuario{
private:
	string rut;
public:
	Vendedor(string,string,DTFecha,bool,string);
	vector<Cliente*> listaSuscriptores;
	void agregarSuscriptor(Cliente*);
	void listarSuscriptores();
	void eliminarSuscriptor(Cliente*);

};

#endif
