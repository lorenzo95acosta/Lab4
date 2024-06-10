#include "../include/datatype/DTComentario.h"
#include <iostream>
#include <string>

using namespace std;

DTComentario::DTComentario(int _id, string _texto, DTFecha _fecha){
    id = _id;
    texto = _texto;
    fecha = _fecha;
}

int DTComentario::getId(){
    return id;
}
string DTComentario::getTexto(){
    return texto;
}
DTFecha DTComentario::getFecha(){
    return fecha;
}