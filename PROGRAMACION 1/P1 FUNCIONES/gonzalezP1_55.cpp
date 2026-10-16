/*
Crea una función que use aritmética de punteros para invertir un array. Probar
con elementos tipo char y con elementos tipo int.

Utilizar aritmética de punteros para movilizarse en el arreglo.

No manejar el array como un arreglo con [ ] sino siempre con punteros.
*/

#include <stdio.h>
#include <string.h>
#define MAX 5

void swap(int *array,size_t tam) {
    int *p=array + tam - 1;
    while (array<p) {
    int temp=*array;
        *array=*p;
        *p=temp;
        *p--;
        *array++;
    }
}

int main() {
    int array[MAX]={10,8,6,4,2};

    printf("Normal\n");
    for (int i=0;i<MAX;i++){
        printf("array[%d]=%d\n",i,array[i]);
    };
    swap(array, MAX);

    printf("Invertido\n");
    for (int i=0;i<MAX;i++) {
        printf("array[%d]=%d\n",i,array[i]);
    }

    return 0;
}