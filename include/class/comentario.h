#ifndef _COMENTARIO_H_
#define _COMENTARIO_H_

#include <iostream>
#include "../datatype/DTFecha.h"

using namespace std;

class Comentario{
private:
	int id;
	DTFecha fecha;
	string texto;
public:
	Comentario(int,DTFecha,string);
	int getId();
	DTFecha getFecha();
	string getText();
	void mostrar();
};



#endif
