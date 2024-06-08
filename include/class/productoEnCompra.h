#ifndef _PRODUCTOENCOMPRA_H_
#define _PRODUCTOENCOMPRA_H_

#include "producto.h"
#include "promocion.h"
class ProductoEnCompra{
private:
	int cantidadProducto;
	float precioTotal;
public:
	ProductoEnCompra();
	Producto* productoAComprar;
	Promocion* promocion;
	float getPrecioTotal();
	int getCantidadProducto();
	
	void agregarProducto(Producto*, int);
	void mostrar();

	// Parte de Promocion y su apliabilidad
	bool aplicaPromocion();	// if tiene promocion y cantidad es mayor igual a minimo
	void aplicarDescuento(); // Aplica el descuento al precioTotal
};

#endif
