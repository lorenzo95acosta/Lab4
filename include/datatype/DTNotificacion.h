#ifndef _DTNOTIFICACION_H_
#define _DTNOTIFICACION_H_

#include <iostream>

using namespace std;

class DTNotificacion{
private:
	string vendedorNombre;
	string promocionNombre;
	string producto;
public:
	DTNotificacion(string,string,string);
	string getVendedorNombre();
	string getPromocionNombre();
	string getProducto();
	void mostrar();
};


#endif
