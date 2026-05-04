#include <iostream>
#include <string>
#include "Pila.h"
#include "Cola.h"

using namespace std;

int main() {
    Pila miPila;
    Cola miCola;
    int op, subOp;
    string ced, nom;

    do {
        cout << "\n--- MENU PRINCIPAL ---\n1. Pilas\n2. Colas\n3. Salir\nOpcion: ";
        cin >> op;

        if (op == 1) { // Lógica de Pilas
            do {
                cout << "\n[PILA] 1. Push 2. Pop 3. Imprimir 4. Volver: ";
                cin >> subOp;
                if (subOp == 1) {
                    cout << "Cedula: "; cin >> ced;
                    cout << "Nombre: "; cin.ignore(); getline(cin, nom);
                    miPila.push(ced, nom);
                } else if (subOp == 2) miPila.pop();
                else if (subOp == 3) miPila.imprimir();
            } while (subOp != 4);
        } 
        else if (op == 2) { // Lógica de Colas
            do {
                cout << "\n[COLA] 1. Enqueue 2. Dequeue 3. Imprimir 4. Volver: ";
                cin >> subOp;
                if (subOp == 1) {
                    cout << "Cedula: "; cin >> ced;
                    cout << "Nombre: "; cin.ignore(); getline(cin, nom);
                    miCola.enqueue(ced, nom);
                } else if (subOp == 2) miCola.dequeue();
                else if (subOp == 3) miCola.imprimir();
            } while (subOp != 4);
        }
    } while (op != 3);

    return 0;
}