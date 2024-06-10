#ifndef _DTCOMPRA_H_
#define _DTCOMPRA_H_

using namespace std;

#include "DTFecha.h"
#include "DTInfoProd.h"
#include <set>

class DTCompra{
  private:
	  float montoFinal;
	  DTFecha fecha;
    set<DTInfoProd> infoProd;
  public:
    DTCompra(float,DTFecha,set<DTInfoProd>);
    float getMontoFinal();
    DTFecha getFecha();
    void listarProductosEnCompra();
};

#endif