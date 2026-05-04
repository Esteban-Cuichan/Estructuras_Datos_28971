#include "IOPERACION_COLASYPILAS_GRUPO1.h"
#include <iostream>
#include "Pila.h"

using namespace std;

void IOPERACION_COLASYPILAS_GRUPO1::insertarPila(Nodo*& cabeza, string cedula, string nombre) {
    Nodo* nuevo = new Nodo(cedula, nombre, NULL, NULL);

    if (cabeza == NULL) {
        cabeza = nuevo;
    } else {
        nuevo->setSiguiente(cabeza); 
        cabeza->setAnterior(nuevo);  
        cabeza = nuevo;              
    }
}
void IOPERACION_COLASYPILAS_GRUPO1::insertarCola(Nodo*& cabeza, Nodo*& cola, string cedula, string nombre) {
    Nodo* nuevo = new Nodo(cedula, nombre, NULL, NULL);
    if (cabeza == NULL) {
        cabeza = nuevo;
        cola = nuevo;
    } else {
        cola->setSiguiente(nuevo);
        nuevo->setAnterior(cola);
        cola = nuevo;
    }
}
