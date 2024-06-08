#include "../include/datatype/DTNotificacion.h"

#include <iostream>
#include <string>

using namespace std;

DTNotificacion::DTNotificacion(string vendedor, string promo, string producto){
  vendedorNombre = vendedor;
  promocionNombre = promo;
  producto = producto;
}

string DTNotificacion::getVendedorNombre(){
  return vendedorNombre;
}

string DTNotificacion::getPromocionNombre(){
  return promocionNombre;
}

string DTNotificacion::getProducto(){
  return producto;
}

void DTNotificacion::mostrar(){
  cout<<vendedorNombre + ", " + promocionNombre + ", " + producto<<endl;
}