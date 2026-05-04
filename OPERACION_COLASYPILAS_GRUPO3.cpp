#include "IOPERACION_COLASYPILAS_GRUPO3.h"
#include "Nodo.h"
#include <iostream>
using namespace std;

// LIFO Se elimina el nodo apuntado por la cabeza.
void Operacion_ColasYPilas::eliminarPila(Nodo*& cabeza) {
    if (cabeza != nullptr) {
        Nodo* aux = cabeza; // Apuntamos al nodo que vamos a eliminar
        cabeza = cabeza->getSiguiente(); // La nueva cabeza es el nodo siguiente
        
        cout << "Elemento eliminado de la Pila: " << endl;
        
        delete aux; 
    } else {
        cout << "La pila esta vacia" << endl;
    }
}


// FIFO 
void Operacion_ColasYPilas::eliminarCola(Nodo*& cabeza, Nodo*& cola) {
    if (cabeza != nullptr) {
        Nodo* aux = cabeza; // Apuntamos al nodo que vamos a eliminar
        cabeza = cabeza->getSiguiente(); // La nueva cabeza es el nodo siguiente

        if (cabeza == nullptr) {
            cola = nullptr;
        }
        
        cout << "Elemento eliminado de la Cola: " << endl;
        
        delete aux; 
    } else {
        cout << "La cola esta vacia" << endl;
    }
}
