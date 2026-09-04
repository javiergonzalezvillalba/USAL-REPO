//
// Created by alumno on 9/4/2026.
//

#include <stdio.h>
#include <stdbool.h>
#define PI 3.14159

float calcular(float radio) {
    float aux=0.0;
    aux=((4.0/3.0)*PI*(radio*radio*radio));
    return aux;
}

int main() {
    float radio=0.0, volumen=0.0;
    int num=0;
    bool seguir=true;

    do {
        printf("Ingresa un radio:");
        scanf("%f", &radio);
        volumen = calcular(radio);
        printf("Volumen de la esfera: %.2f\n", volumen);
        printf("Desea continuar? Si (1), no(0):");
        scanf("%d",&num);
        if (seguir==0) {
            seguir=false;
        }
    }while (seguir);

    return 0;
}