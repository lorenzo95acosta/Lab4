#ifndef _IDPRODUCTO_H_
#define _IDPRODUCTO_H_

using namespace std;

#include <iostream>

class IDProducto{
  private:
	  string codigo;
	  string nombre;
	public:
		IDProducto(string, string);
		string getCodigo();
		string getNombre();
};

#endif