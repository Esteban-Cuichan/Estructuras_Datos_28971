#include <iostream>
#include "Operaciones.h"

void Operaciones::insertarPila(Nodo*& cabeza, string cedula, string nombre){
    Nodo* nuevo = new Nodo(cedula, nombre, NULL, NULL);
    if (cabeza == NULL) {
        cabeza = nuevo;
    } else {
        nuevo->setSiguiente(cabeza); 
        cabeza->setAnterior(nuevo);  
        cabeza = nuevo;              
    }
}

void Operaciones::insertarCola(Nodo*& cabeza, string cedula, string nombre) {
    Nodo* nuevo = new Nodo(cedula, nombre, nullptr, nullptr);
    if (cabeza == nullptr) {
        cabeza = nuevo;
    } else {
        Nodo* aux = cabeza;
        while (aux->getSiguiente() != nullptr) {
            aux = aux->getSiguiente();
        }
        aux->setSiguiente(nuevo);
        nuevo->setAnterior(aux);
    }
}

/*bool Operaciones::buscarColas(const string& cedulaBuscar) {
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
}*/

void Operaciones::eliminarPila(Nodo*& cabeza) {
    if (cabeza != nullptr) {
        Nodo* aux = cabeza;
        cabeza = cabeza->getSiguiente();
        
        cout << "Elemento eliminado de la Pila: " << endl;
        
        delete aux; 
    } else {
        cout << "La pila esta vacia" << endl;
    }
}


void Operaciones::eliminarCola(Nodo*& cabeza, Nodo*& cola) {
    if (cabeza != nullptr) {
        Nodo* aux = cabeza;
        cabeza = cabeza->getSiguiente();
        if (cabeza == nullptr) {
            cola = nullptr;
        }
        cout << "Elemento eliminado de la Cola: " << endl;
        delete aux; 
    } else {
        cout << "La cola esta vacia" << endl;
    }
}

void Operaciones::imprimir(Nodo* inicio){
    Nodo* actual = inicio;
    int contElemento = 1;
    if( inicio == nullptr )
    {
        cout << "La pila/cola esta vacia." << endl;
        return;
    }
    while( actual != nullptr )  {
     cout << "Elemento de la pila/cola: " << contElemento++ << endl;
     cout << "Cedula: " << actual -> getCedula() << endl;
     cout << "Nombre: " << actual -> getNombre() << endl;
            actual = actual -> getSiguiente();
    }
}