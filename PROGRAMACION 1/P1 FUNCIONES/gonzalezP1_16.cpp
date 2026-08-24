//
// Created by Javi on 23/08/2026.
//

#include "gonzalezP1_16.h"
#include <stdio.h>
#define FILS 5
#define COLS 5

int sumar(int matriz[][COLS]) {
    int sum=0;

    for (int i=0; i<FILS; i++) {
        for (int j=0; j<COLS; j++) {
            sum=sum+matriz[i][j];
        }
    }
    return sum;
}

int main() {
    int matriz[FILS][COLS]={41, 15, 8, 99, 23, 7, 56, 12, 4, 88, 31, 64, 2, 9, 73, 18, 45, 33, 91, 5, 67, 21, 50, 11, 39}, suma=0, resultado=0;
    printf("Suma de los numeros de una matriz.\n");
    resultado=sumar(matriz);
    printf("la suma es: %d\n", resultado);

    return 0;
}