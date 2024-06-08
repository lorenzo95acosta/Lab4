#ifndef _DTPRODUCTO_H_
#define _DTPRODUCTO_H_

using namespace std;

#include <iostream>

class DTProducto{
  private:
	  float precio;
	  int stock;
    string desc;
    string categoria;
    string vendedor;
  public:
    DTProducto(float, int, string,string,string);
    float getPrecio();
	  int getStock();
    string getDesc();
    string getCategoria();
    string getVendedor();
};

#endif