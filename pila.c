#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

Pila pila_crear() {
    return NULL;
}

bool pila_es_vacia(Pila pila) {
    return pila == NULL;
}

void* pila_tope(Pila pila) {
    if (pila_es_vacia(pila)) {
        return NULL;
    }
    return pila->dato;
}

Pila pila_apilar(Pila pila, void* dato) {
    Nodo* nuevoNodo = malloc(sizeof(Nodo));
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = pila;
    pila = nuevoNodo;
    return pila;
}

Pila pila_desapilar(Pila pila) {
    if (!pila_es_vacia(pila)) {
        Nodo* nodoEliminar = pila;
        pila = pila->siguiente;
        free(nodoEliminar);
    }
    return pila;
}

void pila_destruir(Pila pila) { //Deberia dejar FuncionDestruir?
    while (!pila_es_vacia(pila)) {
        pila_desapilar(pila);
    }
}