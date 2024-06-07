#include "../include/class/comentario.h"
#include "../include/datatype/DTFecha.h"
#include <iostream>

using namespace std;


Comentario::Comentario(int _id, DTFecha _fecha, string _text){
	id=_id;
	fecha=_fecha;
	texto=_text;
}


int Comentario::getId(){
	return id;
}

string Comentario::getText(){
	return texto;
}

DTFecha Comentario::getFecha(){
	return fecha;
}

void Comentario::mostrar(){
	cout<<"Comentario "<<id<<endl<<"Text: "<<texto<<endl<<"fecha: "<<fecha.toString()<<endl;
}
