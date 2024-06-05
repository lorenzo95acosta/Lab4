#ifndef _COMENTARIO_H_
#define _COMENTARIO_H_

using namespace std;

#include <iostream>
#include "DTFecha.h"
#include "Usuario.h"

class Comentario{
  private:
    int ID;
    string texto;
    DTFecha fecha;
  public:
    //constructores
    Comentario(int ID, string texto, DTFecha fecha);

    //getters
    int getID();
    string getTexto();
    DTFecha getFecha();

    //funciones
    void removeLink(Usuario user);

    //destructor
    ~Comentario();
};

#endif