#ifndef _DTUSUARIO_H_
#define _DTUSUARIO_H_

using namespace std;

#include "DTFecha.h"

class DTUsuario{
	private:
		string nickname;
  	string contraseña;
		DTFecha nacimiento;
};

class DTCliente: public DTUsuario{
	private:
		string direccion;
		string ciudad;
};

class DTVendedor: public DTUsuario{
	private:
		string RUT;
};

#endif
