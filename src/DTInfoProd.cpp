#include "../include/datatype/DTInfoProd.h"
#include <iostream>
#include <string>

using namespace std;


DTInfoProd::DTInfoProd(string _nombre, int _codigo, float _precio, int _stock, string _descripcion, string _categoria,string _vendedor){
	nombre = _nombre;
    codigo = _codigo;
    precio = _precio;
    stock = _stock;
    descripcion = _descripcion;
    categoria = _categoria;
    vendedor = _vendedor;
}

string DTInfoProd::getNombre(){
    return nombre;
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

string DTInfoProd::getDescripcion(){
    return descripcion;
}

string DTInfoProd::getCategoria(){
    return categoria;
}

string DTInfoProd::getVendedor(){
    return vendedor;
}

void DTInfoProd::mostrar(){
	cout<<"Nombre del prodcto: "<<nombre<<endl;
	cout<<"Codigo"<<codigo<<endl;
	cout<<"Precio: "<<precio<<endl;
	cout<<"Stock: "<<stock<<endl;
	cout<<"Descripcion: "<<descripcion<<endl;
    cout<<"Categoria: "<<categoria<<endl;
	cout<<"Vendedor: "<<vendedor<<endl;
}


