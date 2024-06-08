#include "../include/datatype/DTFecha.h"
#include <iostream>
#include <string>

using namespace std;

DTCompra(monto, f, productos){
    montoFinal = monto;
    fecha = f;
    infoProd = productos;
}

float DTCompra::getMontoFinal(){
    return montoFinal;
}

DTFecha DTCompra::getFecha(){
    return fecha;
}

void DTCompra::listarProductosEnCompra(){
    for(productos * productosEnCompra: infoProd){
		productosEnCompra->mostrar();
	}
}