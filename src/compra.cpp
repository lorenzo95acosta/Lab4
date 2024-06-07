#include "../include/class/compra.h"
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

Compra::Compra(DTFecha _fechaCompra){
	fechaCompra=_fechaCompra;
	productoEnviado=false;
	montoFinal=0;
}

void Compra::agregarProductoEnCompra(ProductoEnCompra* prodEnCompraAgregar){
	listaProductosCompra.push_back(prodEnCompraAgregar);
	// Se encargara aplicarPromociones de generar el precio
	//montoFinal+=prodEnCompraAgregar->getPrecioTotal(); 
}

void Compra::mostrar(){
	cout<<"Se mostraran los productose en compra"<<endl<<endl;
	for(ProductoEnCompra* prodEnComp: listaProductosCompra){
		prodEnComp->mostrar();
	}

	cout<<"Datos de la compra:"<<endl;
	cout<<"Monto final: "<<montoFinal<<endl;
}

bool estanProductosNecesarios(vector<PromocionProducto*> prodProm, vector<ProductoEnCompra*> prodComp){

	vector<bool> estan;
	for(PromocionProducto* prod : prodProm){
		estan.push_back(false);
	}
	int pos=0;
	for(PromocionProducto* prod : prodProm){
		for(ProductoEnCompra* prod2: prodComp){
			if(prod->productoAsociado->getNombre() == prod2->productoAComprar->getNombre()){
				estan[pos]=true;
			}
		}
		pos++;
	}
	bool estanTodos=true;
	for(bool esta: estan){
		if(estanTodos){
			estanTodos=esta;
		}
	}
	return estanTodos;
}


void Compra::aplicarPromociones(){
	for(ProductoEnCompra* prodEnCompra : listaProductosCompra){
		if(prodEnCompra->aplicaPromocion() && estanProductosNecesarios(prodEnCompra->promocion->productosEnPromocion,listaProductosCompra)){
			prodEnCompra->aplicarDescuento();
		}
		montoFinal+=prodEnCompra->getPrecioTotal();
	}

}
