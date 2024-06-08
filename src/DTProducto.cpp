#include "../include/datatype/DTProducto.h"
#include <iostream>
#include <string>

using namespace std;


DTProducto::DTProducto(float _precio, int _stock, string _desc, string _categoria,string _vendedor){
    precio = _precio;
    stock = _stock;
    desc = _desc;
    categoria = _categoria;
    vendedor = _vendedor;
}

float DTProducto::getPrecio(){
    return precio;
}

int DTProducto::getStock(){
    return stock;
}

string DTProducto::getDesc(){
    return desc;
}

string DTProducto::getCategoria(){
    return categoria;
}

string DTProducto::getVendedor(){
    return vendedor;
}


