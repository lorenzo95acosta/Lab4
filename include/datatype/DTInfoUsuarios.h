#ifndef _DTINFOUSUARIOS_H_
#define _DTINFOUSUARIOS_H_

using namespace std;

#include "DTFecha.h"

class DTInfoUsuarios{
  private:
	  string nickname;
	  DTFecha nacimiento;
	public:
		DTInfoUsuarios(string, DTFecha);
		virtual string getNickname();
		virtual DTFecha getNacimiento();
};

class DTInfoCliente: public DTInfoUsuarios{
	private:
		string direccion;
		string ciudad;
	public:
		DTInfoCliente(string, DTFecha, string, string);
		string getDireccion();
		string getCiudad();
};

class DTInfoVendedor: public DTInfoUsuarios{
	private:
		string RUT;
	public:
		DTInfoVendedor(string, DTFecha, string);
		string getRUT();
};

#endif