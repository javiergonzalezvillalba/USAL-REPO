//
// Created by javig on 11/09/2026.
//
#include <stdio.h>
#include <stdbool.h> // Necesaria para usar true y false

// Definición de la constante PI como pide la consigna
#define PI 3.141592

// FUNCIÓN DE CÁLCULO
// Recibe el radio, retorna el perímetro y NO lo imprime.
float calcularPerimetro(float radio) {
    float perimetro;
    // La fórmula es: 2 * PI * radio
    perimetro = 2 * PI * radio;

    return perimetro; // Única salida de la función
}

int main() {
    // Variable booleana para controlar la repetición
    bool quiereContinuar = true;
    float radioIngresado, resultado;
    int respuesta;

    // Bucle controlado exclusivamente por el booleano (SIN break)
    while (quiereContinuar) {

        // 1. Ingreso del radio (NO VALIDAR, asumimos que ingresa > 0)
        printf("\nIngrese el valor del radio del circulo: ");
        scanf("%f", &radioIngresado);

        // 2. Invocación de la función y guardado del retorno
        resultado = calcularPerimetro(radioIngresado);

        // 3. Impresión del resultado en el main
        printf("El perimetro del circulo es: %.2f\n", resultado);

        // 4. Pregunta al usuario para continuar (NO VALIDAR)
        printf("\n¿Desea calcular otro perimetro? (1 = SI, 0 = NO): ");
        scanf("%d", &respuesta);

        // Modificamos el booleano según la respuesta para controlar el bucle
        if (respuesta == 0) {
            quiereContinuar = false;
        }
    }

    return 0; // Única salida del programa principal
}