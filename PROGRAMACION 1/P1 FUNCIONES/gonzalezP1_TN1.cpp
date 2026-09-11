//
// Created by javig on 11/09/2026.
//

#include <stdio.h>

// FUNCIÓN DE CÁLCULO
// Calcula el porcentaje, retorna el float y NO lo imprime.
float calcularPorcentaje(int cantidad, int total) {
    float porcentaje = 0.0;

    // Evitamos la división por cero por seguridad
    if (total > 0) {
        // Hacemos un "cast" a float para no perder los decimales en la división
        porcentaje = (float)cantidad * 100.0 / (float)total;
    }

    return porcentaje; // Única salida de la función
}

int main() {
    int n, i;
    char tipoOp;
    double monto;
    int contExtracciones = 0;

    // 1. Ingreso de N (NO VALIDAR, asumimos mayor a cero)
    printf("Ingrese la cantidad total de operaciones a simular: ");
    scanf("%d", &n);

    // 2. Bucle de procesamiento de N transacciones (sin break ni continue)
    for (i = 0; i < n; i++) {
        printf("\nTransaccion %d:\n", i + 1);
        printf("Ingrese el tipo de operacion (D=Deposito, E=Extraccion, O=Otro): ");

        // EL TRUCO DEL ESPACIO: " %c" limpia el buffer del Enter anterior
        scanf(" %c", &tipoOp);

        // 3. Lógica condicional: NO pedir monto si es 'O'
        if (tipoOp != 'O' && tipoOp != 'o') {
            printf("Ingrese el monto de la operacion: ");
            scanf("%lf", &monto); // %lf es el formato para double
        }

        // 4. Conteo para el porcentaje final
        if (tipoOp == 'E' || tipoOp == 'e') {
            contExtracciones++;
        }
    }

    // 5. Invocación de la función e impresión del resultado
    float porcentajeFinal = calcularPorcentaje(contExtracciones, n);

    printf("\n--- RESULTADOS DEL DIA ---\n");
    printf("Porcentaje de extracciones: %.2f%%\n", porcentajeFinal);

    return 0; // Única salida del programa
}