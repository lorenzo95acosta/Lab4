#include "../include/datatype/DTInfoUsuarios.h"

#include <iostream>
#include <string>

using namespace std;

DTInfoUsuarios::DTInfoUsuarios(string nick, DTFecha nacimiento){
  nickname = nick;
  nacimiento = nacimiento;
}

string DTInfoUsuarios::getNickname(){
  return nickname;
}

string DTInfoUsuarios::getNacimiento(){
  return toString(nacimiento);
}

DTInfoCliente::DTInfoCliente(string nick, DTFecha nacimiento, string direccion, string ciudad): DTInfoUsuarios(nick, nacimiento){
  direccion = direccion;
  ciudad = ciudad;
}

string DTInfoCliente::getDireccion(){
  return direccion;
}

string DTInfoCliente::getCiudad(){
  return ciudad;
}

DTInfoVendedor::DTInfoVendedor(string nick, DTFecha nacimiento, string RUT): DTInfoUsuarios(nick, nacimiento){
  RUT = RUT;
}

string DTInfoVendedor::DTInfoVendedor(){
  return RUT;
}