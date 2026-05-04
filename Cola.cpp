#include "Cola.h"
#include <iostream>

void Cola::enqueue(string cedula, string nombre) {
    Nodo* nuevo = new Nodo(cedula, nombre, nullptr);
    
    if (frente == nullptr) {
        // Si no hay nadie, el nuevo es el primero y el último
        frente = nuevo;
        final = nuevo;
    } else {
        // 1. El que estaba al final ahora apunta al que acaba de llegar
        final->setSiguiente(nuevo);
        // 2. Actualizamos el puntero 'final' al nuevo nodo
        final = nuevo;
    }
}

void Cola::dequeue() {
    if (frente == nullptr) {
        std::cout << "Cola vacia." << std::endl;
        return;
    }
    Nodo* aux = frente;
    // La cabeza de la fila avanza al siguiente
    frente = frente->getSiguiente();
    
    // Si la cola se quedó vacía, el final también debe ser null
    if (frente == nullptr) {
        final = nullptr;
    }
    
    delete aux;
}

void Cola::imprimir() {
    Nodo* actual = frente;
    while (actual != nullptr) {
        std::cout << "[Cedula: " << actual->getCedula() << " | Nombre: " << actual->getNombre() << "] -> ";
        actual = actual->getSiguiente();
    }
    std::cout << "NULL" << std::endl;
}