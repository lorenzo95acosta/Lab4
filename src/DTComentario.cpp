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
int DTComentario::getTexto(){
    return texto;
}
int DTComentario::getFecha(){
    return fecha;
}