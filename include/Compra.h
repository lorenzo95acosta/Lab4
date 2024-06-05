#ifndef _COMPRA_H_
#define _COMPRA_H_

using namespace std;

#include "DTFecha.h"

class Compra {
  private:
    DTFecha fechaDeCompra;
    bool productoEnviado;
    float montoFinal;
	public:
		//constructor
		Compra(DTFecha fechaDeCompra, bool false, float montoFinal);

		//getters
		DTFecha getFechaCompra();
		bool getProductoEnviado();
		float getMontoFinal();

		//destructor
		~Compra();
};

