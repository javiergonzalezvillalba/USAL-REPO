//
// Created by alumno on 9/4/2026.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 128
#define TOPE 100

//creacion de un nuevo tipo llamado lotes
typedef struct {
    int numLote;
    char apellido[MAX];
    float superficie;
} t_barrios;

t_barrios carga() {
    t_barrios aux;
    //cargo numero lote
    printf("Ingrese numero de lote:");
    scanf("%d",&aux.numLote);
    //cargo apellido
    printf("Ingrese apellido:");
    scanf("%s",aux.apellido);fflush(stdin);
    //cargo superficie
    printf("Ingrese superficie (m2):");
    scanf("%f",&aux.superficie);
    return aux;
}

void cargarLotes(t_barrios arr[], int num) {
    for (int i = 0; i < num; i++) {
        printf("Casa %d:\n", i+1);
        arr[i]=carga();
        printf("\n");
    }
}

float sumaSuperficies(t_barrios arr[], int num) {
    float suma=0;
    for (int i = 0; i < num; i++) {
        suma=suma+arr[i].superficie;
    }
    return suma;
}

void montosAPagar(t_barrios arr[], int num) {
    float monto=0.0, aysa=0.0;
    printf("Ingrese el monto de AYSA:");
    scanf("%f",&aysa);
    printf("%-6s | %-20s | %-20s | %-20s\n", "LOTE", "APELLIDO", "SUPERFICIE", "MONTO AYSA");
    for (int i=0; i<num; i++) {
        monto=(aysa*arr[i].superficie)/TOPE;
        printf("%-6d | %-20s | %-20.2f | $%-20.2f\n", arr[i].numLote, arr[i].apellido, arr[i].superficie, monto);
    }
}

int main(){
    int num=0;
    float tope=0;
    printf("Ingresa cantidad de lotes:");
    scanf("%d",&num);
    t_barrios barrio[num];

    do {
        //pido la carga de lotes
        cargarLotes(barrio, num);
        tope=sumaSuperficies(barrio, num);
        if (tope==TOPE) {
            printf("Carga completada.\n");
        } else {
            printf("Carga incorrecta, volver a comenzar.\n");
        }
    }while(tope!=TOPE);

    montosAPagar(barrio, num);

    return 0;
}