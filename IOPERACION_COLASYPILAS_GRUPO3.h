#ifndef IOPERACION_COLASYPILAS_GRUPO3_H
#define IOPERACION_COLASYPILAS_GRUPO3_H 
#include "Nodo.h"

class Operacion_ColasYPilas {
public:
    //ultimo en entrar, primero en salir
    void eliminarPila(Nodo*& cabeza);
    //primero en entrar, primero en salir
    void eliminarCola(Nodo*& cabeza, Nodo*& cola);
};

#endif