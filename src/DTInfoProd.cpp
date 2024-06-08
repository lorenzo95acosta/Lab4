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

int DTFeDTInfoProdcha::getStock(){
    return stock;
}

string DTFeDTInfoProdcha::getDesc(){
    return desc;
}

string DTFeDTInfoProdcha::getCategoria(){
    return categoria;
}

string DTFeDTInfoProdcha::getVendedor(){
    return vendedor;
}


