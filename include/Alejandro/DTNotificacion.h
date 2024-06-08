#ifndef _DTNOTIFICACION_H_
#define _DTNOTIFICACION_H_

using namespace std;

#include "DTFecha.h"
#include "DTInfoProd.h"
#include <set>

class DTNotificacion{
  private:
    string vendedor;
    string nombrePromo;
    set<DTInfoProd> productosAsociados;
    DTFecha fechaNotificación;
};

#endif