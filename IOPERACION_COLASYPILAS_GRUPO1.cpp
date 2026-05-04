#include "IOPERACION_COLASYPILAS_GRUPO1.h"
#include <iostream>
#include "Pila.h"

using namespace std;

void push(Nodo*& pila, string nombre, string cedula) {
    Nodo* nuevo = new Nodo();
    nuevo->nombre = nombre;
    nuevo->cedula = cedula;
    nuevo->siguiente = pila;
    pila = nuevo;
}

void ingresarDatos(Nodo*& pila) {
    string nombre, cedula;
    char op;

    do {
        cout << "Ingrese nombre: ";
        cin >> nombre;
        cout << "Ingrese cedula: ";
        cin >> cedula;

        push(pila, nombre, cedula);

        cout << "Desea ingresar otro? (s/n): ";
        cin >> op;
    } while (op == 's' || op == 'S');
} 
void Operacion_ColasYPilas::insertarCola(Nodo*& cabeza, Nodo*& cola, string cedula, string nombre) {
    Nodo* nuevo = new Nodo();
    nuevo->setCedula(cedula);
    nuevo->setNombre(nombre);
    nuevo->setSiguiente(NULL);
    nuevo->setAnterior(NULL);
    if (cabeza == NULL) {
        cabeza = nuevo;
        cola = nuevo;
    } else {
        cola->setSiguiente(nuevo);
        nuevo->setAnterior(cola);
        cola = nuevo;
    }
}
