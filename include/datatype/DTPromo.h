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
  public:
    DTPromo(string,string,DTFecha,float);
    string getNombre();
    string getDesc();
    DTFecha getVencimiento();
    float getDescuento();

};

#endif