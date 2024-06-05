#ifndef _PRODUCTO_H_
#define _PRODUCTO_H_

using namespace std;

#include <iostream>
#include "DTCategoria.h"
#include "ProducroEnCompra.h"

class Producto{
  private:
    string nombre;
    string descripcion;
    DTCategoria categoria;
    float precio;
    int stock;
    string codigo;
  public:
    //constructores
    Producto(string nombre, string descripcion, DTCategoria categoria, float precio, int stock, string codigo);

    //getters
    string getNombre();
    string getDescripcion();
    DTCategoria getCategoria(); //DTCategoria o string?
    float getPrecio();
    int getStock();
    string getCodigo();

    //funciones
    bool prodEnProm();
    float calcularPrecio(float precio, int cant, float descuento);
    float calcularPrecio(float precio, int cant);
    void linkP_PC(ProductoEnCompra pc);

    //destructor
    ~Producto();
};

#endif