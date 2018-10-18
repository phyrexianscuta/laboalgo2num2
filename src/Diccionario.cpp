#include "Diccionario.h"
#include "Aux.hpp"

using namespace std;

#include <vector>

vector<Clave> Diccionario::claves() const {
    vector<Clave> claves;
    for (Asociacion asoc : _diccionario) {
        claves.push_back(asoc.clave);
    }
    return claves;
}

bool Diccionario::Asociacion::operator==(Asociacion a) const {
    return clave == a.clave && valor == a.valor;
}



bool Diccionario::Asociacion::operator<(Asociacion a) const{
    return clave < a.clave;
}

Diccionario::Diccionario() {
    _diccionario = vector<Asociacion>();
}

void Diccionario::borrar(Clave k) {
    for (int i = 0; i < _diccionario.size(); i++) {
        if (_diccionario[i].clave == k) {
            _diccionario.erase(_diccionario.begin() + i);
            return;
        }
    }
}

void Diccionario::definir(Clave k, Valor v) {
    for (int i = 0; i < _diccionario.size(); i++) {
        if (_diccionario[i].clave == k) {
            _diccionario[i].valor = v;
            return;
        }
    }
    Asociacion nuevaAsociacion;
    nuevaAsociacion.clave = k;
    nuevaAsociacion.valor = v;
    _diccionario.push_back(nuevaAsociacion);

}

bool Diccionario::def(Clave k) const {
    for (Asociacion asociacion : _diccionario) {
        if (asociacion.clave == k)
            return true;
    }
    return false;
}

Valor Diccionario::obtener(Clave k) const {
    for (Asociacion asociacion : _diccionario) {
        if (asociacion.clave == k)
            return asociacion.valor;
    }
}

/*
vector<Diccionario::Asociacion> ordenar(vector<Diccionario::Asociacion> v){
    for(int i = 0; i < v.size()-1; i++){
        for(int j= i+1; j < v.size();j++){
            if(v[j] < v[i]){
                Diccionario::Asociacion min = v[j];
                v[j] = v[i];
                v[i] = min;
            }
        }
    }
    return v;
}


bool esPermutacionOrdenada(vector<Diccionario::Asociacion> v1, vector<Diccionario::Asociacion> v2) {
    if (v1.size() != v2.size())
        return false;

    if(v1.size()== 0)
        return true;

    if (v1[0] == v2[0]) {
        v1.erase(v1.begin());
        v2.erase(v2.begin());
        return esPermutacionOrdenada(v1, v2);
    }
    else{
        return false;
    }
}

bool esPermutacion(vector<Diccionario::Asociacion> v1, vector<Diccionario::Asociacion> v2){
    v1 = ordenar(v1);
    v2 = ordenar(v2);
    bool resp = esPermutacionOrdenada(v1,v2);
    return resp;
}
*/
bool Diccionario::operator==(Diccionario a) const {
    return esPermutacion(a._diccionario, _diccionario);
}