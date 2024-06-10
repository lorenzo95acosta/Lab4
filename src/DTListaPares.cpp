#include "../include/datatype/DTListaPares.h"

#include <iostream>
#include <string>

using namespace std;

listaPares::listaPares(string cliente, DTFecha fechaCompra){
  cliente = cliente;
  fechaCompra = fechaCompra;
}

string listaPares::getCliente(){
  return cliente;
}

DTFecha listaPares::getFecha(){
  return fechaCompra;
}