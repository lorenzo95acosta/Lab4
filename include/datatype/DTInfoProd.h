#ifndef _DTINFOPROD_H_
#define _DTINFOPROD_H_

using namespace std;

#include <iostream>

class DTInfoProd{
  private:
    int codigo;
	  float precio;
	  int stock;
    string desc;
    string categoria;
    string vendedor;
  public:
    DTInfoProd(int, float, int, string,string,string);
    int getCodigo();
	  float getPrecio();
	  int getStock();
    string getDesc();
    string getCategoria();
    string getVendedor();
};

#endif