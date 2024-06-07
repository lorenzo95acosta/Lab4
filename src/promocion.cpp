#include "../include/class/promocion.h"

Promocion::Promocion(string _nombre, string _descripcion, DTFecha _vencimiento, float _descuento){
	nombre=_nombre;
	descripcion=_descripcion;
	vencimiento=_vencimiento;
	descuento=_descuento;
}

void Promocion::mostrar(){
	cout<<"Nombre de la promocion: "<<nombre<<endl;
	cout<<"Descripcion: "<<descripcion<<endl;
	cout<<"Vencimiento: "<<vencimiento.toString()<<endl;
	cout<<"Descuento: "<<descuento<<"%"<<endl;
}


void Promocion::mostrarCompleto(){
	for( PromocionProducto * productoProd : productosEnPromocion){
		cout<<"Minimo a comprar: "<<productoProd->getMinimoAComprar()<<endl;
		productoProd->productoAsociado->mostrar();
		cout<<endl;
	}

}

float Promocion::getDescuento(){
	return descuento;
}
