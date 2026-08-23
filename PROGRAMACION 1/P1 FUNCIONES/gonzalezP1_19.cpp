//
// Created by javig on 23/08/2026.
//
#include <stdio.h>
#define FILS 4
#define COLS 4

//al recibir, los nombres de las variables pueden cambiar para ser nombres genericos. Se reconoce que son multifuncion.
void sumar(int m[COLS][FILS], int m2[FILS][COLS], int m3[FILS][COLS]) {
    for (int i = 0; i < FILS; i++) {
        for (int j = 0; j < COLS; j++) {
            m3[i][j] = m[i][j] + m2[i][j];
        }
    }
}
void mostrar(int m[COLS][FILS]) {
    for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < FILS; j++) {
            printf("%d \t", m[i][j]);
        }
        printf("\n");
    }
}

int main() {
    //declaro las matrices con numeros arbitrarios
    int matriz[FILS][COLS]={5, 12, 3, 8, 9, 1, 14, 7, 2, 16, 11, 6, 13, 4, 15, 10},
    matriz2[FILS][COLS]={10, 25, 3, 7, 42, 9, 18, 55, 6, 31, 84, 12, 27, 49, 15, 99},
    matriz3[FILS][COLS];
    //inicio del programa
    //muestro las variables usando la funcion mostrar()
    printf("Matriz 1: \n");
    mostrar(matriz);
    printf("Matriz 2: \n");
    mostrar(matriz2);

    //al llamar una funcion, los elementos que enviamos son para los parametros
    printf("Suma de matrices: \n");
    sumar(matriz, matriz2, matriz3);
    mostrar(matriz3);

    return 0;
}