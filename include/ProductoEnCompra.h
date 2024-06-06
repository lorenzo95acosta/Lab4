#ifndef _PRODUCTO_EN_COMPRA_H_
#define _PRODUCTO_EN_COMPRA_H_

using namespace std;

#include "Compra.h"

class ProductoEnCompra {
  private:
    int cantidadProducto;
    float precioTotal;
		Compra *compra;
  public:
		//constructores
		ProductoEnCompra(int cantidadProducto, float precioTotal);

		//getters
		int getCantProd();
		float getPrecioTotal();
		Compra getCompra();

		//funciones
    void LinkPC_C(Compra c);

		//destructor
		~ProductoEnCompra();
};

#endif