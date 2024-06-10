#ifndef _DTCOMENTARIO_H_
#define _DTCOMENTARIO_H_

using namespace std;

#include "DTFecha.h"

class DTComentario{
	private:
		int id;
		string texto;
		DTFecha fecha;
public:
	DTComentario(int,string,DTFecha);
	int getId();
	int getTexto();
	int getFecha();
};

#endif
