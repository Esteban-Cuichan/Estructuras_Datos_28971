#ifndef PILA_H
#define PILA_H
#include "Nodo.h"

class Pila {
private:
    Nodo* tope;
public:
    Pila() : tope(nullptr) {}
    void push(string cedula, string nombre);
    void pop();
    void imprimir();
};
#endif