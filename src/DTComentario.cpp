#include "../include/datatype/DTComentario.h"
#include <iostream>
#include <string>

using namespace std;

DTComentario::DTComentario(){
    id = -1;
    texto = "";
    fecha = null;
}

DTComentario::DTComentario(i,t,f){
    id = i;
    texto = t;
    fecha = f;
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