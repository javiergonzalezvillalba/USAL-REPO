//
// Created by javig on 11/09/2026.
//

/*
 calcular perimetro 10 rectangulos
 formula (float) = 2*b+2*h

 ingresar los datos manualmente en la matriz
 listar datos;
        - si altura > base, listar con perimetro
            - calcular perimetro EN FUNCION APARTE, guardar variable
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#define FILS 10
#define COLS 2

void cargarMatriz(float matriz[][COLS]) {
    for (int i=0; i<FILS;i++) {
        printf("Rectangulo %d:\n",i+1);
        printf("Cargar base:");
        scanf("%f",&matriz[i][0]);
        printf("Cargar altura:");
        scanf("%f",&matriz[i][1]);
    }
}

float calcularPerimetro(float n1, float n2) {
    float aux=0.0;
    aux=(2*n1)+(2*n2);
    return aux;
}

void listarMatriz(float matriz[][COLS]) {
    float perimetro=0.0;
    for (int i=0; i<FILS;i++) {
        if (matriz[i][1]>matriz[i][0]) {
            perimetro=calcularPerimetro(matriz[i][0], matriz[i][1]);
            printf("Rectangulo %d: Base: %.2f Altura: %.2f Perimetro: %.2f\n",
                i+1,
                matriz[i][0],
                matriz[i][1],
                perimetro);
        }
    }
}

int main() {
    float matriz[FILS][COLS];

    cargarMatriz(matriz);
    listarMatriz(matriz);

    return 0;
}