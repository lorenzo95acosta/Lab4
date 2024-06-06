#ifndef _VENDEDOR_H_
#define _VENDEDOR_H_

using namespace std;

#include "Usuario.h"
#include "DTNotificacion.h"
#include "DTProducto.h"
#include "Cliente.h"
#include "DTComentario.h"
#include "Comentario.h"
#include "Promocion.h"

class Vendedor: public Usuario{
  private:
    string nickname;
    DTFecha nacimiento;
    string contraseña;
    string RUT;
  public:
    //getters
    string getNick();
    DTFecha getNacimiento();
    string getContraseña();
    string getRUT();

    //funciones
    set<DTComentario> listarComentarios();
    void removeLink(Comentario coment);
    bool esVend();
    bool esCliente();
    set<DTProducto> listadoProductos();
    void notificarUsuarios(Promocion prom);
    bool noPerteneceASubs();
    void agregarSuscripcionesVend(Cliente c);
    void eliminarSuscripcionesVend(Cliente c);

    //destructor
    ~Vendedor();
};

#endif