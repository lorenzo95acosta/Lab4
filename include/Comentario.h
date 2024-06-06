#ifndef _COMENTARIO_H_
#define _COMENTARIO_H_

using namespace std;

#include <iostream>
#include <set>
#include "DTFecha.h"
#include "Producto.h"

class Usuario;

class Comentario{
  private:
    int ID;
    string texto;
    DTFecha fecha;
    set<Producto> *productos;
  public:
    //constructores
    Comentario(int ID, string texto, DTFecha fecha);

    //getters
    int getID();
    string getTexto();
    DTFecha getFecha();
    set<Producto> getProductos();
    //funciones
    void removeLink(Usuario user);

    //destructor
    ~Comentario();
};

#include "Usuario.h"

#endif