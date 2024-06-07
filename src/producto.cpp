#include "../include/class/producto.h"

Producto::Producto(string _nombre ,string _descripcion, string _categoria, float _precio, int _stock, string _codigo, bool _tienePromocion){
	nombre=_nombre;
	descripcion=_descripcion;
	categoria=_categoria;
	precio=_precio;
	stock=_stock;
	codigo=_codigo;
	tienePromocion=_tienePromocion;
}

void Producto::mostrar(){
	cout<<"Nombre del prodcto: "<<nombre<<endl;
	cout<<"Descripcion: "<<descripcion<<endl;
	cout<<"Precio: "<<precio<<endl;
	cout<<"Stock: "<<stock<<endl;
	cout<<"Codigo: "<<codigo<<endl;
	cout<<"Promocion: ";
	if(tienePromocion){
		cout<<"Tiene"<<endl;
	}
	else{
		cout<<"No tiene"<<endl;
	}
}

string Producto::getNombre(){
	return nombre;
}
string Producto::getDescripcion(){
	return descripcion;
}
string Producto::getCategoria(){
	return categoria;
}
float Producto::getPrecio(){
	return precio;
}
int Producto::getStock(){
	return stock;
}
string Producto::getCodigo(){
	return codigo;
}
bool Producto::getTienePromocion(){
	return tienePromocion;
}























