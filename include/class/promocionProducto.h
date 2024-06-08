#ifndef _PROMOCIONPRODUCTO_H_
#define _PROMOCIONPRODUCTO_H_

#include "producto.h"

class Promocion;

class PromocionProducto{
private:
	int minimoAComprar;
	float descuento;
public:
	PromocionProducto(int,float);

	// getters
	int getMinimoAComprar();
	float getDescuento();

	// Asociaciones
	Promocion* promocionAsociada;
	Producto*  productoAsociado;

	// Otros
};

#include "promocion.h"

#endif
