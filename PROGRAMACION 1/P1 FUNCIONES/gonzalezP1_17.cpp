//
// Created by javig on 23/08/2026.
//

#include <stdio.h>
#define FILS 4
#define COLS 5

//funciones principales
//funcion para calcular el maximo
int maximo(int matriz[][COLS]) {
    int resultado=matriz[0][0];
    for (int row = 0; row < FILS; row++) {
        for (int col = 0; col < COLS; col++) {
            if (matriz[row][col]>resultado) {
                resultado=matriz[row][col];
            }
        }
    }
    return resultado;
}
//funcion para calcular el minimo
int minimo(int matriz[][COLS]) {
    int resultado=matriz[0][0];
    for (int row = 0; row < FILS; row++) {
        for (int col = 0; col < COLS; col++) {
            if (matriz[row][col]<resultado) {
                resultado=matriz[row][col];
            }
        }
    }
    return resultado;
}

//cuerpo principal
int main() {
    int matriz[FILS][COLS]= {41, 15, 8, 96, 23, 7, 56, 12, 4, 88, 31, 64, 3, 9, 73, 18, 45, 33, 91, 5}, max=0, min=0;

    //guardo las funciones en variables
    max=maximo(matriz);
    min=minimo(matriz);
    //imprimo por pantalla los valores devueltos por la funcion
    printf("Minimo: %d \n", min);
    printf("Maximo: %d \n", max);

    return 0;
}