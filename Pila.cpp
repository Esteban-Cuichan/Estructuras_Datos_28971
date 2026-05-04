#include "Pila.h"
#include <iostream>

void Pila::push(string cedula, string nombre) {
    Nodo* nuevo = new Nodo(cedula, nombre, nullptr);
    nuevo->setSiguiente(tope);
    tope = nuevo;
}

void Pila::pop() {
    if (tope == nullptr) {
        std::cout << "Pila vacia, no hay nada que eliminar." << std::endl;
        return;
    }
    Nodo* aux = tope;
    tope = tope->getSiguiente();
    delete aux;
}

void Pila::imprimir() {
    Nodo* actual = tope;
    while (actual != nullptr) {
        std::cout << "[Cedula: " << actual->getCedula() << " | Nombre: " << actual->getNombre() << "]" << std::endl;
        actual = actual->getSiguiente();
    }
}