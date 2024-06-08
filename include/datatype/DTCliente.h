#ifndef _DTCLIENTE_H_
#define _DTCLIENTE_H_
using namespace std;

#include "DTUsuario.h"
#include "DTNotificacion.h"

class DTCliente : public DTUsuario{
private:
	string direccion;
    string ciudad;
    DTNotificacion notification;
public:
	DTCliente(string,string,DTNotificacion);
	string getDireccion();
	string getCiudad();
	DTNotificacion getNotificacion();

};

#endif
