#include <stdio.h>
#include "pila.h"

int main()
{
    Pila pila = pila_crear();
    int num1 = 5;
    int num2 = 10;
    float pi = 3.14159;

    pila = pila_apilar(pila, &num1);
    pila = pila_apilar(pila, &num2);
    pila = pila_apilar(pila, &pi);

    int *elemento1 = (int *)pila_tope(pila);
    printf("Elemento en el tope: %d\n", *elemento1);

    pila = pila_desapilar(pila);

    float *elemento2 = (float *)pila_tope(pila);
    printf("Elemento en el tope: %f\n", *elemento2);

    pila_destruir(pila);

    return 0;
}
