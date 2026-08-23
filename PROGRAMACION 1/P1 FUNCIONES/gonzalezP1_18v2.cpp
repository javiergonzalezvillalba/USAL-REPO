//
// Created by javig on 23/08/2026.
//

#include <cstdio>
#define FILS 3
#define COLS 5

void traspuesta(int matriz[][COLS], int matriz2[][FILS]) {
    for (int i=0;i<FILS;i++) {
        for (int j=0;j<COLS;j++) {
            matriz2[j][i]=matriz[i][j];
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
void mostrar(int matriz2[][FILS]) {
    for (int i=0;i<COLS;i++) {
        for (int j=0;j<FILS;j++) {
            printf("%d\t", matriz2[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[FILS][COLS]={4, 8, 15, 16, 23, 42, 7, 9, 12, 33, 43, 11, 2, 6, 99},matriz2[COLS][FILS];
    //Matriz original
    //Funcion de trasposicion
    printf("Matriz original: \n");
    traspuesta(matriz, matriz2);
    //Printeo de matriz 2
    printf("Matriz traspuesta: \n");
    mostrar(matriz2);

    return 0;
}