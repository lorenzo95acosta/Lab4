#ifndef _DTPROMO_H_
#define _DTPROMO_H_

using namespace std;

#include "DTFecha.h"

class DTPromo{
  private:
    string nombre;
    string desc;
    DTFecha vencimiento;
    float descuento;
};

#endif