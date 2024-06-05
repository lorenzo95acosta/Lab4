#ifndef _PROMOCION_H_
#define _PROMOCION_H_

using namespace std;

#include <iostream>
#include "DTFecha.h"

class Promocion{
  private:
    string nombre;
    string descripcion;
    DTFecha vencimiento;
    float descuento;
  public:
    //constructores
    Promocion(string nombre, string descripcion, DTFecha vencimiento, float descuento);

    //getters
    string getNombre();
    string getDescripcion();
    DTFecha getVenc();
    float getDescuento();

    //funciones
    bool checkProm();

    //destructor
    ~Promocion();
};

#endif