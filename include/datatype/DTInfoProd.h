#ifndef _DTINFOPROD_H_
#define _DTINFOPROD_H_

using namespace std;

#include <iostream>

class DTInfoProd{
  private:
    string nombre;
    int codigo;
	  float precio;
	  int stock;
    string descripcion;
    string categoria;
    string vendedor;
  public:
    DTInfoProd(string, int, float, int, string,string,string);
    string getNombre();
    int getCodigo();
	  float getPrecio();
	  int getStock();
    string getDescripcion();
    string getCategoria();
    string getVendedor();
    void mostrar();
};

#endif