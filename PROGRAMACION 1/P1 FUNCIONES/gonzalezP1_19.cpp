//
// Created by javig on 23/08/2026.
//
#include <stdio.h>
#define FILS 4
#define COLS 4

void sumar(int matriz[COLS][FILS], int matriz2[FILS][COLS], int matriz3[FILS][COLS]) {
    for (int i = 0; i < FILS; i++) {
        for (int j = 0; j < COLS; j++) {
            matriz3[i][j] = matriz[i][j] + matriz2[i][j];
        }
    }
}
void mostrar(int matriz3[COLS][FILS]) {
    for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < FILS; j++) {
            printf("%d \t", matriz3[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[FILS][COLS]={5, 12, 3, 8, 9, 1, 14, 7, 2, 16, 11, 6, 13, 4, 15, 10},
    matriz2[FILS][COLS]={10, 25, 3, 7, 42, 9, 18, 55, 6, 31, 84, 12, 27, 49, 15, 99},
    matriz3[FILS][COLS];

    sumar(matriz, matriz2, matriz3);
    mostrar(matriz3);

    return 0;
}