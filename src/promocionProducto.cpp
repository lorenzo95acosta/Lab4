#include "../include/class/promocionProducto.h"


PromocionProducto::PromocionProducto(int _minimoAComprar, float _descuento){
	minimoAComprar=_minimoAComprar;
	descuento=_descuento;
}

int PromocionProducto::getMinimoAComprar(){
	return minimoAComprar;
}

float PromocionProducto::getDescuento(){
	return descuento;
}
