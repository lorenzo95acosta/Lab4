#ifndef _PROMOCION_H_
#define _PROMOCION_H_

using namespace std;

#include <iostream>
#include <set>
#include "DTFecha.h"
#include "PromocionProducto.h"

class Promocion{
  private:
    string nombre;
    string descripcion;
    DTFecha vencimiento;
    float descuento;
    set<PromocionProducto> *promocionProductos;
  public:
    //constructores
    Promocion(string nombre, string descripcion, DTFecha vencimiento, float descuento);

    //getters
    string getNombre();
    string getDescripcion();
    DTFecha getVenc();
    float getDescuento();
    set<PromocionProducto> getPromocionProductos();

    //funciones
    bool checkProm();

    //destructor
    ~Promocion();
};

#endif