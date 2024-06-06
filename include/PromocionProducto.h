#ifndef _PROMOCION_PRODUCTO_H_
#define _PROMOCION_PRODUCTO_H_

using namespace std;

#include "Producto.h"

class PromocionProducto {
  private:
    int minimoAComprar;
		Producto *producto;
  public:
		//constructores
		PromocionProducto(int minimoAComprar);

		//getters
		int getMinAComprar();
		Producto getProducto();
		
		//funciones
    void LinkPP_P(Producto p);
    bool cantCorrecta();

		//destructor
		~PromocionProducto();
};

#endif