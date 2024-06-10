#ifndef _DTCLIENTE_H_
#define _DTCLIENTE_H_
using namespace std;

#include "DTUsuario.h"
#include "DTNotificacion.h"

class DTCliente : public DTUsuario{
private:
	string direccion;
    string ciudad;
public:
	DTCliente(string, string, DTFecha, string, string);
	string getDireccion();
	string getCiudad();
};

#endif
