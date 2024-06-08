#ifndef _DTCLIENTE_H_
#define _DTCLIENTE_H_
using namespace std;

include "DTUsuario.h"

class DTCliente : public DTUsuario{
private:
	string direccion;
    string ciudad;
};

#endif
