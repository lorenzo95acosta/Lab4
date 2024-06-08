#ifndef _COMPRA_H_
#define _COMPRA_H_

#include "../datatype/DTFecha.h"
#include "productoEnCompra.h"
class Compra{
private:
	DTFecha fechaCompra;
	bool productoEnviado;
	float montoFinal;
public:
	Compra(DTFecha);
	vector<ProductoEnCompra*> listaProductosCompra;
	void agregarProductoEnCompra(ProductoEnCompra*);
	void mostrar();

	void aplicarPromociones(); // Recorre listaProductosCompra y si corresponde, aplica descuento
				   // Aun no se fija si estan los productos necesarios

};


#endif
