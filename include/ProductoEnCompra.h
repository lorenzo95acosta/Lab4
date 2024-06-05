#ifndef _PRODUCTO_EN_COMPRA_H_
#define _PRODUCTO_EN_COMPRA_H_

using namespace std;

#include "Compra.h"

class ProductoEnCompra {
  private:
    int cantidadProducto;
    float precioTotal;
  public:
		//constructores
		productoEnCompra(int cantidadProducto, float precioTotal);

		//getters
		int getCantProd();
		float getPrecioTotal();
		
		//funciones
    void LinkPC_C(Compra c);

		//destructor
		~productoEnCompra();
};