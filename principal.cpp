#include <stdio.h>
#include <string.h>

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


//Se agregan funciones para realizar los casos de prueba en el main
#define MAX_PALABRA 32
#define MAX_LINEA 256
#define cmd_es(nom_comando, cmd) (0 == strcmp(nom_comando, cmd))

char restoLinea[MAX_LINEA + 1];
char cmd[MAX_PALABRA];

void main_altaUsuario();
void main_listadoUsuario();
void main_altaProducto();
void main_consultarProducto();
void main_crearPromocion();
void main_constultarPromocion();
void main_realizarCompra();
void main_dejarComentario();
void main_eliminarComentario();
void main_enviarProducto();
void main_expedienteUsuario();
void main_suscribirNotificacion();
void main_consultaNotificacion();
void main_eliminarSuscripcion();


void leerChars(char* cs);
void leerRestoLinea(char* cs);


void leerRestoLinea(char* cs) { scanf("%[^\n]", cs); }
void leerChars(char* cs) { scanf("%s", cs); }


void main_altaUsuario(){
	cout<<"altaUsuario"<<endl;
};

void main_listadoUsuario(){
	cout<<"listadoUsuario"<<endl;
};

void main_altaProducto(){
	cout<<"altaProducto"<<endl;
};

void main_consultarProducto(){
	cout<<"consultarProducto"<<endl;
};
void main_crearPromocion(){
	cout<<"crearPromocion"<<endl;
};

void main_constultarPromocion(){
	cout<<"constultarPromocion"<<endl;
};

void main_realizarCompra(){
	cout<<"realizarCompra"<<endl;
};

void main_dejarComentario(){
	cout<<"dejarComentario"<<endl;
};

void main_eliminarComentario(){
	cout<<"eliminarComentario"<<endl;
};

void main_enviarProducto(){
	cout<<"enviarProducto"<<endl;
};

void main_expedienteUsuario(){
	cout<<"expedienteUsuario"<<endl;
};

void main_suscribirNotificacion(){
	cout<<"suscribirNotificacion"<<endl;
};

void main_consultaNotificacion(){
	cout<<"consultaNotificacion"<<endl;
};

void main_eliminarSuscripcion(){
	cout<<"eliminarSuscripcion"<<endl;
};


int main(){
///////////////////////////////////////////////////////
//Prueba Menu interactivo
	int cont_comandos = 0;
    bool seguir = true;

    while (seguir){
		cont_comandos++;
        printf("%u>", cont_comandos);

		leerChars(cmd);

		if (cmd_es("Fin", cmd)) {  // Termina el programa
            seguir = false;
            printf("Fin.\n");

        } else if (cmd_es("#", cmd)) {  // Imprime el comentario luego del #
            leerRestoLinea(restoLinea);
            printf("# %s.\n", restoLinea);

        } else if (cmd_es("altaUsuario", cmd)) {
            main_altaUsuario();

		} else if (cmd_es("listadoUsuario", cmd)) {
            main_listadoUsuario();

		} else if (cmd_es("altaProducto", cmd)) {
            main_altaProducto();

		} else if (cmd_es("consultarProducto", cmd)) {
            main_consultarProducto();

		} else if (cmd_es("crearPromocion", cmd)) {
            main_crearPromocion();

		} else if (cmd_es("constultarPromocion", cmd)) {
            main_constultarPromocion();

		} else if (cmd_es("realizarCompra", cmd)) {
            main_realizarCompra();

		} else if (cmd_es("dejarComentario", cmd)) {
            main_dejarComentario();

		} else if (cmd_es("eliminarComentario", cmd)) {
            main_eliminarComentario();

		} else if (cmd_es("enviarProducto", cmd)) {
            main_enviarProducto();

		} else if (cmd_es("expedienteUsuario", cmd)) {
            main_expedienteUsuario();

		} else if (cmd_es("suscribirNotificacion", cmd)) {
            main_suscribirNotificacion();

		} else if (cmd_es("consultaNotificacion", cmd)) {
            main_consultaNotificacion();

		} else if (cmd_es("eliminarSuscripcion", cmd)) {
            main_eliminarSuscripcion();
		}
		fgets(restoLinea, MAX_LINEA + 1, stdin);
	}

///////////////////////////////////////////////////////

	
	// DTFecha  f =  DTFecha(4,6,24);
	// DTFecha  f2 =  DTFecha(5,6,24);

	// // Productos [NombreProducto,Descripcion,Categoria,Precio,Stock,Codigo,TienePromocion?]
	// cout<<"Cracion de Productos"<<endl;
	// Producto * p1 = new Producto("Celular","Celular tipo ...","Tecnologia",159.9,5,"ABCD",true);
	// p1->mostrar();

    //     cout<<endl<<endl;
    //     Producto * p2 = new Producto("Tablet","Tablet tipo ...","Tecnologia",459.9,2,"ABCD",true);
    //     p2->mostrar();

	// // Promocion
	// cout<<endl<<endl<<"Creacion de Promocion"<<endl;
	// Promocion* promo = new Promocion("Promocion de Navidad","Promo para productos de Tecngologia",f2,50);
	// promo->mostrar();
	// cout<<endl;


	// // PromocionProducto [ PromocionProducto  minimo a comprar y  descuento]
	// PromocionProducto *pp1 = new PromocionProducto(5,50);
	// PromocionProducto *pp2 = new PromocionProducto(2,50);

	// // Asocio los productos a sus promocionesProducto
	// p1->promocionAsociada=pp1;
	// p2->promocionAsociada=pp2;
	// // Asocio las PromocionesProducto a sus productos
	// pp1->productoAsociado=p1;
	// pp2->productoAsociado=p2;
	// // Finalmente le agrego las Promocion a las PromocionesProducto
	// pp1->promocionAsociada=promo;
	// pp2->promocionAsociada=promo;

	// // Agrego las PromocionProducto a la Promocion
	// promo->productosEnPromocion.push_back(pp1);
	// promo->productosEnPromocion.push_back(pp2);
	// cout<<"Muestro la promocion con sus  promociones asociadas"<<endl;
	// promo->mostrarCompleto();

	// // ProductosEnCompra [ Producto y Cantidad]
	// cout<<endl<<endl;
	// ProductoEnCompra * pec = new ProductoEnCompra();
	// pec->agregarProducto(p1,10);
	// pec->mostrar();

    //     cout<<endl<<endl;
    //     ProductoEnCompra * pec2 = new ProductoEnCompra();
    //     pec2->agregarProducto(p2,2);
    //     pec2->mostrar();

	// // Agrego las promociones  a los ProductoEnCompra
	// pec->promocion=promo;
	// pec2->promocion=promo;


	// // Compra [Fecha de Compra] y se le agregan [ProductosEnCompra]
	// cout<<endl<<endl;
	// Compra * cmp1= new Compra(f);
	// cmp1->agregarProductoEnCompra(pec);
	// cmp1->agregarProductoEnCompra(pec2);
	// cmp1->aplicarPromociones();
	// cmp1->mostrar();

	// delete pp1;
	// delete pp2;
	// delete cmp1;
	// delete pec;
	// delete p1;
	// delete p2;
	// return 0;
}
