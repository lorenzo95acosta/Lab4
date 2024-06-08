#ifndef _PRODUCTO_H_
#define _PRODUCTO_H_

#include <iostream>

using namespace std;

class PromocionProducto;

class Producto{
private:
	string nombre;
	string descripcion;
	string categoria;
	float precio;
	int stock;
	string codigo;
	bool tienePromocion;
public:
	Producto(string,string,string,float,int,string,bool);

	// getters
	string getNombre();
	string getDescripcion();
	string getCategoria();
	float getPrecio();
	int getStock();
	string getCodigo();
	bool getTienePromocion();

	// Promocion asociada
	PromocionProducto * promocionAsociada;
	
	// otros
	void mostrar();

};

#include "promocionProducto.h"


#endif
