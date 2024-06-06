#ifndef _CLIENTE_H_
#define _CLIENTE_H_

using namespace std;

#include "Usuario.h"
#include "DTNotificacion.h"
#include "DTComentario.h"
#include "Comentario.h"
#include "Promocion.h"

class Vendedor;

class Cliente: public Usuario{
  private:
    string nickname;
    DTFecha nacimiento;
    string contraseña;
    string direccion;
    string ciudad;
    set<DTNotificacion> notificaciones; 
  public:
    //getters
    string getNick();
    DTFecha getNacimiento();
    string getContraseña();
    string getDireccion();
    string getCiudad();
    set<DTNotificacion> getNotificaciones();

    //funciones
    set<DTComentario> listarComentarios();
    void removeLink(Comentario coment);
    bool esVend();
    bool esCliente();
    void notificarUsuarios(string vend, Promocion prom);
    set<string> subs();
    void agregarSuscripcionesCliente();
    set<DTNotificacion> listarNotificacionesRecibidas();
    void eliminarNotificaciones();
    set<string> listarSuscripciones();
    void eliminarSuscripcionesCliente();

    //destructor
    ~Cliente();
};

#include "Vendedor.h"

#endif