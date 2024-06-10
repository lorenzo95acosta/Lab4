#include "../include/datatype/DTFecha.h"
#include "../include/datatype/DTCompra.h"
#include <iostream>
#include <string>

using namespace std;

DTCompra::DTCompra(float _montoFinal, DTFecha _fecha, set<DTInfoProd> _infoProd){
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
    for(DTInfoProd productosEnCompra : infoProd){
		productosEnCompra.mostrar();
	}
}