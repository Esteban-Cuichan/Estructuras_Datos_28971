#include "Cola.h"
#include <iostream>
#include <stdexcept>

Cola::Cola() {
    this->frente = nullptr;
    this->final = nullptr;
}

Cola::~Cola() {
  
    while (this->frente != nullptr) {
        desencolar();
    }
}

void Cola::encolar(const Persona& p) {

    Nodo* nuevoNodo = new Nodo(p);

    if (this->frente == nullptr) {

        this->frente = nuevoNodo;
        this->final = nuevoNodo;
    } else {
      
        this->final->setSiguiente(nuevoNodo);

        this->final = nuevoNodo;
    }
}

Persona Cola::desencolar() {
    if (this->frente == nullptr) {
        throw std::runtime_error("Error: La cola esta vacia, no hay a quien atender.");
    }

    Nodo* nodoAAtender = this->frente;
    Persona personaAtendida = nodoAAtender->getDato();

    this->frente = this->frente->getSiguiente();

    if (this->frente == nullptr) {
        this->final = nullptr;
    }

    delete nodoAAtender;

    return personaAtendida;
}
bool Cola::buscar(const std::string& cedulaBuscar) {
    Cola colaAuxiliar;
    bool loEncontre = false;

    while (this->frente != nullptr) {
        Persona personaActual = desencolar();
        
        if (personaActual.getCedula() == cedulaBuscar) {
            loEncontre = true;
        }
        
        colaAuxiliar.encolar(personaActual); 
    }

 
    while (colaAuxiliar.frente != nullptr) {
        this->encolar(colaAuxiliar.desencolar());
    }

    return loEncontre;
}

void Cola::imprimir() const {
    if (this->frente == nullptr) {
        std::cout << "La cola esta vacia.\n";
        return;
    }

    Nodo* punteroRecorredor = this->frente;
    std::cout << "--- ESTADO DE LA COLA ---\n";
    
    while (punteroRecorredor != nullptr) {
        std::cout << "Cedula: " << punteroRecorredor->getDato().getCedula() 
                  << " | Nombre: " << punteroRecorredor->getDato().getNombre() << "\n";
                  

        punteroRecorredor = punteroRecorredor->getSiguiente();
    }
    std::cout << "-------------------------------------------\n";
}