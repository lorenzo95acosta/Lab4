#include "../include/datatype/IDProducto.h"

#include <iostream>
#include <string>

using namespace std;

IDProducto::IDProducto(string codigo, string nombre){
  codigo = codigo;
  nombre = nombre;
}

string IDProducto::getCodigo(){
  return codigo;
}

string IDProducto::getNombre(){
  return nombre;
}