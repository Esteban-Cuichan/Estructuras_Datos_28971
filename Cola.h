#ifndef COLA_H
#define COLA_H
#include "Nodo.h"

class Cola {
private:
    Nodo* frente; // Por donde salen
    Nodo* final;  // Por donde entran
public:
    Cola() : frente(nullptr), final(nullptr) {}
    void enqueue(string cedula, string nombre); // Insertar
    void dequeue();                             // Eliminar
    void imprimir();
};
#endif