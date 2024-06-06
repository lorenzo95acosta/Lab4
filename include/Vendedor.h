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
#include "Producto.h"

class Vendedor: public Usuario{
  private:
    string nickname;
    DTFecha nacimiento;
    string contraseña;
    string RUT;
    set<Comentario> *comentarios;
    set<Cliente> *clientes;
    set<Producto> *productos;
  public:
    //getters
    string getNick();
    DTFecha getNacimiento();
    string getContraseña();
    string getRUT();
    set<Comentario> getComentarios();
    set<Cliente> getClientes();
    set<Producto> getProductos();

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