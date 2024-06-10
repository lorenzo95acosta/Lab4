#ifndef _DTUSUARIO_H_
#define _DTUSUARIO_H_

using namespace std;

#include "DTFecha.h"

class DTUsuario{
	private:
		string nickname;
  	string contraseña;
		DTFecha nacimiento;
	public:
		DTUsuario(string, string, DTFecha);
		virtual string getNick();
		virtual string getContraseña();
		virtual DTFecha getNacimiento();
};

// class DTCliente: public DTUsuario{
// 	private:
// 		string direccion;
// 		string ciudad;
// 	public:
// 		DTCliente(string, string, DTFecha, string, string);
// 		string getDireccion();
// 		string getCiudad();
// };

// class DTVendedor: public DTUsuario{
// 	private:
// 		string RUT;
// 	public:
// 		DTVendedor(string, string, DTFecha, string);
// 		string getRUT();
// };

#endif