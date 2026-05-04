#include "IOPERACION_COLASYPILAS_GRUPO2.h"
#include <iostream>
#include "Pila.h"

using namespace std;

bool Cola::buscarColas(const string& cedulaBuscar) {
    bool enc = false; 
    Nodo* aux = this->frente; 

    while (aux != nullptr) {   
        if (aux->getCedula() == cedulaBuscar) {
            enc = true;
            break; 
        } 
        aux = aux->getSiguiente(); 
    }

    return enc;
}