//
// Created by alumno on 8/28/2026.
//

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define MAX 3

//creacion de un nuevo tipo llamado t_viviendas
typedef struct {
    int numHabitantes;
    int numAmbientes;
    bool servicioElectrico;
    float consumoElectrico;
} t_viviendas;

//funcion para cargar una casa del tipo t_viviendas
t_viviendas cargarUnaCasa() {
    t_viviendas aux;
    char letra=' ';

    //Ingreso y validacion de numero de habitantes y ambientes
    do {
        printf("\nIngrese numero de habitantes:");
        scanf("%d",&aux.numHabitantes);fflush(stdin);
    }while(aux.numHabitantes<1);
    do {
        printf("Ingrese numero de ambientes:");
        scanf("%d",&aux.numAmbientes);fflush(stdin);
    }while(aux.numAmbientes<1);

    //Ingreso, validacion y creacion del booleano del servicio electrico
    do {
        printf("Ingrese si tiene servicio electrico -> S: (Si) o N: (No):");
        scanf("%c",&letra);fflush(stdin);
        letra=toupper(letra);
    }while(letra!='S' && letra!='N');
    if(letra=='S') {
        aux.servicioElectrico=true;
    }else
        aux.servicioElectrico=false;

    //Ingreso y validacion de cantidad del consumo electrico
    if (letra=='S') {
        do {
            printf("Ingrese cantidad de consumo electrico (KW/h):");
            scanf("%f",&aux.consumoElectrico);fflush(stdin);
        }while(aux.consumoElectrico<0);
    }else
        aux.consumoElectrico=0.0;

    return aux;
}

//funcion para cargar el arreglo casas[] con elementos tipo t_viviendas
void pedirDatos(t_viviendas arr[]) {
    for (int i = 0; i < MAX; i++) {
        arr[i]=cargarUnaCasa();
    }
}

int cantidadPersonas(t_viviendas arr[]) {
    int cantidad=0;
    for (int i = 0; i < MAX; i++) {
        cantidad=cantidad+arr[i].numHabitantes;
    }
    return cantidad;
}

int cantidadConServicio(t_viviendas arr[]) {
    int cantidad=0;

    for (int i = 0; i < MAX; i++) {
        if (arr[i].servicioElectrico==false) {
            cantidad=cantidad+arr[i].numHabitantes;
        }
    }
    return cantidad;
}

void menu(t_viviendas arr[]) {
    int num=0;

    printf("--------------MENU-----------------\n");
    printf("1. Cuantos habitantes sin servicio electrico.\n");
    printf("2. Promedio en cada casa. Lista n habitantes, n ambientes, promedio.\n");
    printf("3. Total de del consumo con servicio y consumen menos de 1kWh.\n");
    printf("0. Salir.\n");
    printf("Ingrese una opcion: ");
    scanf("%d",&num);

    do {
        switch (num) {
            case 1:
                printf("Cantidad sin servicio electrico: ");
                cantidadConServicio(t_viviendas arr);
                break;
            case 2:
                pedirDatos(arr);
                break;
            case 3:
                pedirDatos(arr);
                break;
            case 0:
                printf("Salir.\n");
                break;
            default:
                printf("Ingrese una opcion valida: ");
        }
    }while(num!=0);
}

int main() {
    int cant=0;
    t_viviendas casas[MAX];

    pedirDatos(casas);
    menu(casas);

    return 0;
}