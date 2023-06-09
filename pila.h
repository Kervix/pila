#include <stdbool.h>
typedef struct Nodo {
    void* dato;
    struct Nodo* siguiente;
} Nodo;

typedef Nodo *Pila;

typedef void(FuncionDestruir)(void* dato);

/**
 * Crea una pila vacia.
*/
Pila pila_crear();
/**
 * Libera la pila.
*/
void pila_destruir(Pila pila);
/**
 * Dada una pila decide si es vacía;
*/
bool pila_es_vacia(Pila pila);
/**
 * Devuelve una puntero al dato que esta en el tope de la pila.
*/
void* pila_tope(Pila pila);
/**
 * Apila el dato dado en la pila
*/
Pila pila_apilar(Pila pila, void* dato);
/**
 * Desapila el ultimo elemento de la pila.
*/
Pila pila_desapilar(Pila pila);