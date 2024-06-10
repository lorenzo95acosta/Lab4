#include "../include/datatype/DTCliente.h"
#include "../include/datatype/DTUsuario.h"
#include "../include/datatype/DTNotificacion.h"

#include <iostream>
#include <string>

using namespace std;

DTCliente::DTCliente(string _nick, string _contraseña, DTFecha _nacimiento, string _direccion, string _ciudad): DTUsuario(nick, contraseña, nacimiento){
    direccion = _direccion;
    ciudad = _ciudad;
}

string DTCliente::getDireccion(){
    return direccion;
}

string DTCliente::getCiudad(){
    return ciudad;
}
