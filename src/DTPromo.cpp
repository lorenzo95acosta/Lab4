#include "../include/datatype/DTPromo.h"
#include <iostream>
#include <string>

using namespace std;

DTPromo::DTPromo(string _nombre, string _desc, DTFecha _vencimiento, float _descuento){
    nombre = _nombre;
    desc = _desc;
    vencimiento = _vencimiento;
    descuento = _descuento;
}

string DTPromo::getNombre(){
    return nombre;
}

string DTPromo::getDesc(){
    return desc;
}

DTFecha DTPromo::getVencimiento(){
    return vencimiento;
}

float DTPromo::getDescuento(){
    return descuento;
}