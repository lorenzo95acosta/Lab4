#include "../include/datatype/DTCliente.h"
#include "../include/datatype/DTUsuario.h"
#include "../include/datatype/DTNotificacion.h"

#include <iostream>
#include <string>

using namespace std;

DTCliente::DTCliente(string _direccion, string _ciudad, DTNotificacion _notificacion){
    direccion = _direccion;
    ciudad = _ciudad;
    notificacion = _notificacion;
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
