#ifndef _INTERFACES_H
#define _INTERFACES_H

#include <iostream>
#include "DTCategoria.h"
#include "DTComentario.h"
#include "DTCompra.h"
#include "DTFecha.h"
#include "DTInfoProd.h"
#include "DTUsuario.h"
#include "DTInfoUsuarios.h"
#include "DTListaPares.h"
#include "DTNotificacion.h"
#include "DTProducto.h"
#include "DTPromo.h"
#include "IDProducto.h"

using namespace std;

class IAltaListadoUsuario {
  public:
    virtual void nuevoUsuario(DTUsuario) = 0;
    virtual DTInfoUsuarios listadoUsuarios() = 0;
    virtual ~IAltaListadoUsuario(){};
};

class IAltaProducto {
  public: 
    virtual string listadoVendedores() = 0;
    virtual void seleccionarVendedor(string) = 0;
    virtual void ingresarProductos(string, float, int, string, DTCategoria) = 0;
    virtual void confirmar() = 0;
    virtual ~IAltaProducto(){};
};

class IConsultarProducto {
  public:
    virtual IDProducto listadoIDProductos() = 0;
    virtual DTProducto mostrarProducto(string) = 0;
    virtual ~IConsultarProducto(){};
};

class ICrearPromocion {
  public:
    virtual void ingresarDatosPromo(string, string, DTFecha) = 0;
    virtual string listadoVendedores() = 0;
    virtual void seleccionarVendedor(string) = 0;
    virtual DTProducto listadoProductos() = 0;
    virtual void ingresarProducto(int, int) = 0;
    virtual void confirmar() = 0;
    virtual ~ICrearPromocion(){};
};

class IConsultarPromocion {
  public:
    virtual DTPromo listadoPromociones() = 0;
    virtual DTInfoProd seleccionarPromo(string) = 0;
    virtual ~IConsultarPromocion(){};
};

class IRealizarCompra {
  public:
    virtual string listadoClientes() = 0;
    virtual void seleccionarCliente(string) = 0;
    virtual DTInfoProd mostrarProductos() = 0;
    virtual void agregarProducto(string, int) = 0;
    virtual DTCompra mostrarCompra() = 0;
    virtual void confirmarCompra() = 0;
    virtual ~IRealizarCompra(){};
};

class IDejarComentario {
  public:
    virtual string listadoUsuariosNick() = 0;
    virtual void seleccionarUsuario(string) = 0;
    virtual string listadoCodigoProductos() = 0;
    virtual void seleccionarProducto(string) = 0;
    virtual void nuevoComentario(string) = 0;
    virtual void seleccionarComentario(DTComentario) = 0;
    virtual void respuestaComentario(string) = 0;
    virtual ~IDejarComentario(){};
};

class IEliminarComentario {
  public:
    virtual string listadoUsuariosNick() = 0;
    virtual void seleccionarUsuario(string) = 0;
    virtual DTComentario listarComentarios() = 0;
    virtual void seleccionarComentario(DTComentario) = 0;
    virtual void eliminarComentario() = 0;
    virtual ~IEliminarComentario(){};
};

class IEnviarProducto {
  public: 
    virtual string listadoVendedores() = 0;
    virtual void seleccionarVendedor(string) = 0;
    virtual string listadoCodigoProductos() = 0;
    virtual void seleccionarProducto(string) = 0;
    virtual listaPares listadoCompras() = 0;
    virtual void seleccionarCompra(listaPares) = 0;
    virtual void marcarEnviado() = 0;
    virtual ~IEnviarProducto(){};
};

class IExpedienteUsuario {
  public:
    virtual string listadoUsuariosNick() = 0;
    virtual void seleccionarUsuario(string) = 0;
    virtual DTInfoUsuarios listarInfoUsuario() = 0;
    virtual ~IExpedienteUsuario(){};
};

class INotificaciones {
  public:
    virtual string listarSinSuscripcion(string) = 0;
    virtual void seleccionarVendedor(string) = 0;
    virtual void agregarSuscripciones(string) = 0;
    virtual DTNotificacion listarNotificacionesRecibidas(string) = 0;
    virtual void eliminarNotificaciones(string) = 0;
    virtual string listarSuscripcionesVend(string) = 0;
    virtual void eliminarSuscripciones(string) = 0;
    virtual ~INotificaciones(){};
};

#endif