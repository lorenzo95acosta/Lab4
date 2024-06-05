#ifndef _DTPRODUCTO_H_
#define _DTPRODUCTO_H_

using namespace std;

#include <iostream>
#include "DTCategoria.h"

class DTProducto{
  private:
	  float precio;
	  int stock;
    string descripcion;
    DTCategoria categoria;
    string vendedor;
};

#endif