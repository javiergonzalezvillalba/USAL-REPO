//
// Created by javig on 10/09/2026.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_RESERVAS 1000

typedef struct {
    int personas;          // 1 a 3
    char fecha[9];         // DDMMYYYY + '\0'
    int noches;            // > 0
} Reserva;

int main() {
    Reserva reservas[MAX_RESERVAS];
    int n, i;
    int mesBuscado;

    printf("Cuantas reservas existen? ");
    scanf("%d", &n);

    if (n < 1 || n > MAX_RESERVAS) {
        printf("Cantidad fuera de rango (1 a %d).\n", MAX_RESERVAS);
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nReserva %d\n", i + 1);

        printf("Cantidad de personas (1 a 3): ");
        scanf("%d", &reservas[i].personas);

        printf("Fecha de ingreso (DDMMYYYY): ");
        scanf("%8s", reservas[i].fecha);

        printf("Cantidad de noches (>0): ");
        scanf("%d", &reservas[i].noches);
    }

    printf("\nQue mes quiere averiguar? (1-12): ");
    scanf("%d", &mesBuscado);

    printf("\nReservas del mes %d:\n", mesBuscado);
    printf("Nro\tPersonas\tFecha\t\tNoches\n");

    for (i = 0; i < n; i++) {
        // Extraer MM de DDMMYYYY: posiciones 2 y 3
        char mesStr[3];
        mesStr[0] = reservas[i].fecha[2];
        mesStr[1] = reservas[i].fecha[3];
        mesStr[2] = '\0';

        if (atoi(mesStr) == mesBuscado) {
            printf("%d\t%d\t\t%s\t%d\n",
                   i + 1,
                   reservas[i].personas,
                   reservas[i].fecha,
                   reservas[i].noches);
        }
    }

    return 0;
}