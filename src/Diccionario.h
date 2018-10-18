#ifndef __DICCIONARIO_H__
#define __DICCIONARIO_H__

#include <vector>
using namespace std;

typedef int Clave;
typedef int Valor;

class Diccionario {
public:
	Diccionario();
	void definir(Clave k, Valor v);
	bool def(Clave k) const;
	Valor obtener(Clave k) const;
	void borrar(Clave k);
	bool operator==(Diccionario d) const;
	vector<Clave> claves() const;
	
public:
	struct Asociacion{
		Clave clave;
		Valor valor;
		bool operator==(Asociacion a) const;
        bool operator<(Asociacion a) const;
	};

	vector<Asociacion> _diccionario;

};

#endif /*__DICCIONARIO_H__*/
