#include "../include/datatype/DTFecha.h"
#include <iostream>
#include <string>

using namespace std;

DTCompra(float _montoFinal, DTFecha _fecha, infoProd * _infoProd){
    montoFinal = _montoFinal;
    fecha = _fecha;
    infoProd = _infoProd;
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