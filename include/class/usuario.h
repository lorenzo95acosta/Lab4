#ifndef _USUARIO_H_
#define _USUARIO_H_

#include <iostream>
#include "../datatype/DTFecha.h"
#include "comentario.h"
#include <map>

using namespace std;

class Usuario{
private:
	string nickname;
	DTFecha fecha;
	string contrasena;
	bool cliente;
public:
	// Constructor
	Usuario(string,string,DTFecha,bool);

	// Getters
	string getNickname();
	string getContrasena();
	DTFecha getFecha();
	bool esCliente();

	// Comentarios
	map<int,Comentario*> comentarios;
	void agregarComentario(Comentario *);
	void listarComentarios();
	void eliminarComentario(Comentario *);

	// Otros
	virtual void mostrar();
//	void mostrar();
	virtual ~Usuario()=default;
};



#endif
