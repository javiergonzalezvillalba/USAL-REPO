/*
Escribe una función que reciba un array de enteros y su tamaño, y devuelva la
suma de sus elementos usando punteros.
Utilizar aritmética de punteros para moverse en el arreglo.
No manejar el array como un arreglo con [ ] sino siempre con punteros
 */

#include <stdio.h>
#define MAX 5

void suma(int a[],int *p) {
    int aux=0;
    for (int i=0;i<MAX;i++,p++) {
        aux=aux+*p;
    }
    return aux;
}

int main() {
    int a[MAX]={5,4,3,2,1};
    int suma=0;
    int *p=&a[0];
    int total=0;
    total=suma(a,&p);
    printf("Suma: %d", total);
    return 0;
}