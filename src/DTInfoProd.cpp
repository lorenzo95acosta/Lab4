#include "../include/datatype/DTInfoProd.h"
#include <iostream>
#include <string>

using namespace std;


DTInfoProd::DTInfoProd(int _codigo, float _precio, int _stock, string _desc, string _categoria,string _vendedor){
	codigo = _codigo;
    precio = _precio;
    stock = _stock;
    desc = _desc;
    categoria = _categoria;
    vendedor = _vendedor;
}


int DTInfoProd::getCodigo(){
    return codigo;
}

float DTInfoProd::getPrecio(){
    return precio;
}

int DTInfoProd::getStock(){
    return stock;
}

string DTInfoProd::getDesc(){
    return desc;
}

string DTInfoProd::getCategoria(){
    return categoria;
}

string DTInfoProd::getVendedor(){
    return vendedor;
}


