#ifndef _CONTRUSUARIO_H_
#define _CONTRUSUARIO_H_

#include <stdio.h>
#include "interfaces.h"

using namespace std;

class ContrUsuario: public IAltaListadoUsuario, public IDejarComentario, public IEliminarComentario, public IExpedienteUsuario, public INotificaciones{
  public:
    void nuevoUsuario(DTUsuario);
    DTInfoUsuarios listadoUsuarios();
    string listadoUsuariosNick();
    void seleccionarUsuario(string);
    string listadoProductos();
    void seleccionarProducto(string);
    void nuevoComentario(string);
    void seleccionarComentario(DTComentario);
    void respuestaComentario(string);
    //string listadoUsuarios();
    //void seleccionarUsuario(string);
    DTComentario listarComentarios();
    //void seleccionarComentario(DTComentario);
    void eliminarComentario();
    //string listadoUsuarios();
    //void seleccionarUsuario(string);
    DTInfoUsuarios listarInfoUsuario();
    string listarSinSuscripcion(string);
    void seleccionarVendedor(string);
    void agregarSuscripciones(string);
    DTNotificacion listarNotificacionesRecibidas(string);
    void eliminarNotificaciones(string);
    string listarSuscripcionesVend(string);
    void eliminarSuscripciones(string);
};

#endif