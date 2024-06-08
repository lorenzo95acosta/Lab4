#ifndef _USUARIO_H_
#define _USUARIO_H_

using namespace std;

#include "DTFecha.h"
#include "DTComentario.h"
#include <set>

class Usuario{
  private:
    string nickname;
    DTFecha nacimiento;
    string contraseña;
  public:
    //getters
    virtual string getNick() = 0;
    virtual DTFecha getNacimiento() = 0;
    virtual string getContraseña() = 0;

    //funciones
    virtual set<DTComentario> listarComentarios() = 0;
    virtual void removeLink(Comentario coment) = 0;
    virtual bool esVend() = 0;
    virtual bool esCliente() = 0;

    //destructor
    virtual ~Usuario() = 0;
};

#endif