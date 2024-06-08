#ifndef _DTINFOUSUARIOS_H_
#define _DTINFOUSUARIOS_H_

using namespace std;

#include "DTFecha.h"

class DTInfoUsuarios{
  private:
	  string nickname;
	  DTFecha nacimiento;
};

class DTInfoCliente: public DTInfoUsuarios{
	private:
		string direccion;
		string ciudad;
};

class DTInfoVendedor: public DTInfoUsuarios{
	private:
		string RUT;
};

#endif