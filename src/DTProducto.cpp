#include "../include/datatype/DTProd.h"
#include <iostream>
#include <string>

using namespace std;


DTInfoProd::DTProd(float _precio, int _stock, string _desc, string _categoria,string _vendedor){
    precio = _precio;
    stock = _stock;
    desc = _desc;
    categoria = _categoria;
    vendedor = _vendedor;
}

float DTProd::getPrecio(){
    return precio;
}

int DTProd::getStock(){
    return stock;
}

string DTProd::getDesc(){
    return desc;
}

string DTProd::getCategoria(){
    return categoria;
}

string DTProd::getVendedor(){
    return vendedor;
}


