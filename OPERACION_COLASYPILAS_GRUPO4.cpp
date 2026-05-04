#include "IOPERACION_COLASYPILAS_GRUPO4.h"
#include <iostream>
using namespace std;


void imprimir(Nodo* inicio){
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
