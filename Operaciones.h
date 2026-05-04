#ifndef OPERACIONES_H
#define OPERACIONES_H
#include "Nodo.h"

class Operaciones{
    public:
        void insertarPila(Nodo*& cabeza, string cedula, string nombre);
        void insertarCola(Nodo*& cabeza, string cedula, string nombre);
        virtual bool buscarPilasColas(const std::string& cedula) = 0;
        void eliminarPila(Nodo*& cabeza);
        void eliminarCola(Nodo*& cabeza, Nodo*& cola);
        void imprimir(Nodo* inicio);
};
#endif