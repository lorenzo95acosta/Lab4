#include <stdio.h>
#include "include/class/usuario.h"
#include "include/class/cliente.h"
#include "include/class/vendedor.h"
#include "include/datatype/DTFecha.h"
#include "include/datatype/DTNotificacion.h"
#include "include/class/comentario.h"
#include "include/class/producto.h"
#include "include/class/promocion.h"
#include "include/class/promocionProducto.h"
#include "include/class/productoEnCompra.h"
#include "include/class/compra.h"
#include <iostream>

using namespace std;

int main(){
	DTFecha  f =  DTFecha(4,6,24);
	DTFecha  f2 =  DTFecha(5,6,24);


	// Productos [NombreProducto,Descripcion,Categoria,Precio,Stock,Codigo,TienePromocion?]
	cout<<"Cracion de Productos"<<endl;
	Producto * p1 = new Producto("Celular","Celular tipo ...","Tecnologia",159.9,5,"ABCD",true);
	p1->mostrar();

        cout<<endl<<endl;
        Producto * p2 = new Producto("Tablet","Tablet tipo ...","Tecnologia",459.9,2,"ABCD",true);
        p2->mostrar();

	// Promocion
	cout<<endl<<endl<<"Creacion de Promocion"<<endl;
	Promocion* promo = new Promocion("Promocion de Navidad","Promo para productos de Tecngologia",f2,50);
	promo->mostrar();
	cout<<endl;


	// PromocionProducto [ PromocionProducto  minimo a comprar y  descuento]
	PromocionProducto *pp1 = new PromocionProducto(5,50);
	PromocionProducto *pp2 = new PromocionProducto(2,50);

	// Asocio los productos a sus promocionesProducto
	p1->promocionAsociada=pp1;
	p2->promocionAsociada=pp2;
	// Asocio las PromocionesProducto a sus productos
	pp1->productoAsociado=p1;
	pp2->productoAsociado=p2;
	// Finalmente le agrego las Promocion a las PromocionesProducto
	pp1->promocionAsociada=promo;
	pp2->promocionAsociada=promo;

	// Agrego las PromocionProducto a la Promocion
	promo->productosEnPromocion.push_back(pp1);
	promo->productosEnPromocion.push_back(pp2);
	cout<<"Muestro la promocion con sus  promociones asociadas"<<endl;
	promo->mostrarCompleto();

	// ProductosEnCompra [ Producto y Cantidad]
	cout<<endl<<endl;
	ProductoEnCompra * pec = new ProductoEnCompra();
	pec->agregarProducto(p1,10);
	pec->mostrar();

        cout<<endl<<endl;
        ProductoEnCompra * pec2 = new ProductoEnCompra();
        pec2->agregarProducto(p2,2);
        pec2->mostrar();

	// Agrego las promociones  a los ProductoEnCompra
	pec->promocion=promo;
	pec2->promocion=promo;


	// Compra [Fecha de Compra] y se le agregan [ProductosEnCompra]
	cout<<endl<<endl;
	Compra * cmp1= new Compra(f);
	cmp1->agregarProductoEnCompra(pec);
	cmp1->agregarProductoEnCompra(pec2);
	cmp1->aplicarPromociones();
	cmp1->mostrar();

	delete pp1;
	delete pp2;
	delete cmp1;
	delete pec;
	delete p1;
	delete p2;
	return 0;
}
