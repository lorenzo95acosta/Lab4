#ifndef _CONTRPRODUCTO_H_
#define _CONTRPRODUCTO_H_

#include <stdio.h>
#include "interfaces.h"
#include "Producto.h"
#include "Promocion.h"
#include "ProductoEnCompra.h"
#include "Compra.h"
#include "PromocionProducto.h"

using namespace std;

class ContrProducto: public IConsultarProducto, public ICrearPromocion, public IConsultarPromocion, public IRealizarCompra, public IEnviarProducto{
  private:
    set<Promocion> *promociones;
    set<Producto> *productos;
    ProductoEnCompra *prodEnCompra;
    Compra *compra;
  public:
    IDProducto listadoIDProductos();
    DTProducto mostrarProducto(string);
    void ingresarDatosPromo(string, string, DTFecha);
    string listadoVendedores();
    void seleccionarVendedor(string);
    DTProducto listadoProductos();
    void ingresarProducto(int, int);
    void confirmar();
    DTPromo listadoPromociones();
    DTInfoProd seleccionarPromo(string);
    string listadoClientes();
    void seleccionarCliente(string);
    DTInfoProd mostrarProductos();
    void agregarProducto(string, int);
    DTCompra mostrarCompra();
    void confirmarCompra();
    //string listadoVendedores();
    //void seleccionarVendedor(string);
    string listadoCodigoProductos();
    void seleccionarProducto(string);
    listaPares listadoCompras();
    void seleccionarCompra(listaPares);
    void marcarEnviado();
};

#endif