#include "../include/class/productoEnCompra.h"

ProductoEnCompra::ProductoEnCompra(){
	cantidadProducto=0;
	precioTotal=0;
}



void ProductoEnCompra::agregarProducto(Producto* productoElegido,int cantidadElegida){
	productoAComprar=productoElegido;
	cantidadProducto=cantidadElegida;
	precioTotal=productoElegido->getPrecio()*cantidadElegida;
}


void ProductoEnCompra::mostrar(){
	cout<<"Mostrando Producto en Compra"<<endl<<"Producto:"<<endl;
	productoAComprar->mostrar();
	cout<<"Cantidad: "<<cantidadProducto<<endl;
	cout<<"Precio total del producto: "<<precioTotal<<endl;
}

float ProductoEnCompra::getPrecioTotal(){
	return precioTotal;
}

bool  ProductoEnCompra::aplicaPromocion(){
	return (productoAComprar->getTienePromocion()) &&  (cantidadProducto >=productoAComprar->promocionAsociada->getMinimoAComprar());
}

void ProductoEnCompra::aplicarDescuento(){
	cout<<endl<<endl<<endl<<endl<<"Aplciando descuento del produto individual"<<endl;
	cout<<"Debo hacer un descuento de: "<<productoAComprar->promocionAsociada->getDescuento()<<endl;
	float descuentoFinal=(100-productoAComprar->promocionAsociada->getDescuento());
	cout<<"El precio es: "<<precioTotal<<endl;
	precioTotal=(precioTotal*descuentoFinal)/100;
	cout<<"El descuetno quedo de: "<<precioTotal<<endl<<endl<<endl;
}
