#ifndef _PROMOCION_H_
#define _PROMOCION_H_

#include <iostream>
#include "../datatype/DTFecha.h"
#include "promocionProducto.h"
#include <vector>
using namespace std;

class Promocion{
private:
	string nombre;
	string descripcion;
	DTFecha vencimiento;
	float descuento;

public:
	Promocion(string,string,DTFecha,float);
	// muestra solo los datos de la promocion
	void mostrar();
	// productos de la promocion
	vector<PromocionProducto*> productosEnPromocion;
	// muestra los datos y los productos asociados y los minimo de cada uno
	void mostrarCompleto();
	
	float getDescuento();
};


#endif
