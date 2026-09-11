//
// Created by javig on 11/09/2026.
//

#include <stdio.h>
#include <stdlib.h> // Necesaria para rand() y srand()
#include <time.h>   // Necesaria para la semilla del tiempo

#define N 4 // Definimos el tamaño de la matriz (ej. 4x4)

// 1. FUNCIÓN DIAGONAL PRINCIPAL
// Retorna el resultado, NO lo imprime, y tiene una sola salida.
int sumarDiagonalPrincipal(int matriz[N][N]) {
    int suma = 0;
    for (int i = 0; i < N; i++) {
        // En la diagonal principal, la fila y la columna son iguales [i][i]
        suma = suma + matriz[i][i];
    }
    return suma; // Única salida
}

// 2. FUNCIÓN DIAGONAL SECUNDARIA
int sumarDiagonalSecundaria(int matriz[][N]) {
    int suma = 0;
    for (int i = 0; i < N; i++) {
        // En la diagonal secundaria, la columna retrocede mientras la fila avanza
        suma = suma + matriz[i][N - 1 - i];
    }
    return suma; // Única salida
}

int main() {
    int matriz[N][N];
    srand(time(NULL)); // Plantamos la semilla para los aleatorios

    // Carga de la matriz con el motor principal de bucles anidados
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = rand() % 100+1; // Números aleatorios entre 1 y 100
        }
    }

    // Invocamos a las funciones y guardamos los retornos
    int sumaPrin = sumarDiagonalPrincipal(matriz);
    int sumaSec = sumarDiagonalSecundaria(matriz);

    // Al finalizar la carga, mostramos por pantalla las sumas (como pide la consigna)
    printf("La suma de la diagonal principal es: %d\n", sumaPrin);
    printf("La suma de la diagonal secundaria es: %d\n", sumaSec);

    return 0;
}