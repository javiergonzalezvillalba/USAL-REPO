//
// Created by javig on 10/09/2026.
//
/*
Crear matriz 100x3
rellenar con numeros aleatorios entre 1 y 50 -- rand
*/

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define FILS 100
#define COLS 3
#define MAX 10

void rellenarMatriz(int matriz[][COLS]) {
    for (int i=0; i<FILS;i++) {
        for (int j=0;j<COLS;j++) {
            matriz[i][j]=rand()%50+1;
        }
    }
}

void calcularPerimetro(int matriz[][COLS], int arr[]) {
    int perimetro=1;
    for (int i=0;i<FILS;i++){
        perimetro=1;
        for (int j=0;j<COLS;j++) {
            perimetro=matriz[i][j]*perimetro;
        }
        arr[i]=perimetro;
    }
}

void verDistintos(int matriz[][COLS]) {
    int a=0, b=0, c=0;
    for (int i=0;i<FILS;i++) {
        if (matriz[i][0]!=matriz[i][1] && matriz[i][0]!=matriz[i][2] && matriz[i][1]!=matriz[i][2]) {
            a=matriz[i][0];
            b=matriz[i][1];
            c=matriz[i][2];
        }
        printf("Triangulo escaleno %d: A:%d B:%d C:%d\n", i, a, b, c);
    }
}

int main() {
    int matriz[FILS][COLS], arr[MAX];
    srand(time(NULL));

    rellenarMatriz(matriz);
    calcularPerimetro(matriz, arr);
    verDistintos(matriz);

    return 0;
}