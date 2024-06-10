#include "../include/datatype/DTUsuario.h"

#include <iostream>
#include <string>

using namespace std;

DTUsuario::DTUsuario(string nick, string contraseña, DTFecha nacimiento){
  nickname = nick;
  contraseña = contraseña;
  nacimiento = nacimiento;
}

string DTUsuario::getNick(){
  return nickname;
}

string DTUsuario::getContraseña(){
  return contraseña;
}

string DTUsuario::getNacimiento(){
  return toString(nacimiento);
}

// DTCliente::DTCliente(string nick, string contraseña, DTFecha nacimiento, string direccion, string ciudad): DTUsuario(nick, contraseña, nacimiento){
//   direccion = direccion;
//   ciudad = ciudad;
// }

// string DTCliente::getCiudad(){
//   return ciudad;
// }

// string DTCliente::getDireccion(){
//   return direccion;
// }

// DTVendedor::DTVendedor(string nick, string contraseña, DTFecha nacimiento, string RUT): DTUsuario(nick, contraseña. nacimiento){
//   RUT = RUT;
// }

// string DTVendedor::getRUT(){
//   return RUT;
// }