#ifndef _DTFECHA_H_
#define _DTFECHA_H_

#include <iostream>

using namespace std;

class DTFecha{
	private:
		int dia;
		int mes;
		int anio;
	public:
		DTFecha();
		DTFecha(int,int,int);
		string toString();
		int getDia();
		int getMes();
		int getAnio();
};

#endif
