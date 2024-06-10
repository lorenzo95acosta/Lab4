#include "../include/datatype/DTFecha.h"
#include <iostream>
#include <string>

using namespace std;


DTFecha::DTFecha(){
	dia=-1;
	mes=-1;
	anio=-1;
}

DTFecha::DTFecha(int d,int m, int a){
	dia=d;
	mes=m;
	anio=a;
}

string DTFecha::toString(){
	string result=to_string(dia)+"/"+to_string(mes)+"/"+to_string(anio);
	return result;
}

int DTFecha::getDia(){
	return dia;
}

int DTFecha::getMes(){
	return mes;
}

int DTFecha::getAnio(){
	return anio;
}

