#include "../include/datatype/DTCliente.h"

#include <iostream>
#include <string>

using namespace std;

DTCliente::DTCliente(){
    direccion = "";
    ciudad = "";
    notificacion = null;
}

DTCliente::DTCliente(d,c,n){
    direccion = d;
    ciudad = c;
    notificacion = n;
}

string DTCliente::getDireccion(){
    return direccion;
}

string DTCliente::getCiudad(){
    return ciudad;
}

DTNotificacion DTCliente::getNotificacion(){
    return notificacion;
}
