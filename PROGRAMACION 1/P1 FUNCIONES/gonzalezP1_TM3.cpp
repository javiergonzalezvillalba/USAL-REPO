//
// Created by javig on 10/09/2026.
//

//PRIMER PARTE INGRESO DE DATOS
//ingresar cantidad de alumnos fija (TOPE) int
//crear tipo "t_alumnos" donde       |
// -apellido string (MAX)             |
// -nota primer parcial (int)         |
// -nota segundo parcial (int)         |
// no hay recuperatorio, simple dato

//SEGUNDA PARTE
// Lista de los que promocionaron
// promocion, primer >=7 y segundo >=7
// Calcular promedio de cada que promociono
// Lista con datos: apellido y promedio

//aclaraciones
//funcion que reciba nota 1 y nota 2, y retorne el promedio
//guardar nota 1 en variable, guardar nota 2 en variable, guardar promedio en variable

//estructura

/*
 1- librerias ---------------------------
 2- definiciones  ---------------------------
    max 128
 3- crear el tipo ---------------------------
    typedef struct{
       char apellido[MAX];
       int nota1;
       int nota2;
    } t_alumnos;

 4- funciones -----------------------------
  t_alumnos cargar(){ --------- funcion que carga un alumno y retorna el tipo alumnos
   t_alumnos aux:   para guardar los datos de cada alumno
   print para apellido
   scanf("%d", &aux.apellido[MAX]);
    print para nota1
    scanf("%d", &aux.nota1);
    print para nota2
   scanf("%d", &aux.nota2);
    retorna aux; (es el alumno cargado)
   }

 void cargarAlumnos(t_alumnos arr[], int num) {
   t_alumnos aux:   para guardar los datos de cada alumno
   con un for() voy recorriendo la cantidad de alumnos en el arreglo hasta cargar todos
   for(int i=0; i<num; i++) {
      arr[i]=cargarAlumno();  // cargo en el arreglo i el elemento carga
   }

 float calcularPromedio(int nota1, int nota2) {
   float aux:   para guardar el promedio

   aux=(nota1+nota2)/2;

   retorna aux; (es el promedio)
   }

void funcionListado(t_alumnos arr[], int num)   recibo el arrelgo de alumnos
    foloat promedio=0.0;

    printf("Listado de los alumnos que promocionaron son:")

    //hacer condicional para los que promocionaron
    for(int i=0; i<num; i++) {  recorro el arreglo alumno por alumno
        if (arr[i].nota >=7 && arr[i].nota2 >=7) {  ----- muestro solo los que promocionaron
            promedio = calcularPromedio(arr[i].nota1, arr[i].nota2)  // aca calculo el promedio de cada alumno
            printf %-20%s %-20s  "APELLIDO", "PROMEDIO"
            printf %-20%s %-20s arr[i].apellido, promedio
            }

 5 - main {---------------------------
   int num --- guardo el tope
    - ingreso TOPE de alumons (scanf num int)
   t_alumnos arr[num] --- guardo los alumnos con la cantidad que asigne anteriormente, con el tipo t_alumno

   funcion para cargar los datos de los alumnos
   cargarAlumnos(arr, num); ------- le envio el arreglo de los alumnos, junto con cuantos alumnos tengo
                               // con eso llenamos ListaALumnos>CargasALumnos>elemnentosAlumnos

    LISTA LA CARGA

    funcionListado(arr, num); - para crear la lista

    return 0;
    }

---------------------------

*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#define MAX 128

typedef struct {
    char apellido[MAX];
    int nota1;
    int nota2;
} t_alumnos;

t_alumnos cargar() {
    t_alumnos aux;
    printf("Ingrese apellido:");
    scanf("%s",&aux.apellido);
    printf("Ingrese nota 1:");
    scanf("%d",&aux.nota1);
    printf("Ingrese nota 2:");
    scanf("%d",&aux.nota2);
    return aux;
}

void cargarAlumnos(t_alumnos arr[], int num) {
    for (int i=0; i<num;i++) {
        arr[i]=cargar();
    }
}

float calcularPromedio(int nota1, int nota2) {
    float aux=0.0, n1=nota1, n2=nota2;
    aux=(n1+n2)/2;
    return aux;

}

void funcionListado(t_alumnos arr[], int num) {
    float promedio=0.0;
    printf("El listado de los que promocionaron:\n");
    printf("%-20s %-20s\n", "APELLIDO", "PROMEDIO");
    for (int i=0;i<num;i++) {
        if (arr[i].nota1>=7 && arr[i].nota2>=7) {
            promedio=calcularPromedio(arr[i].nota1, arr[i].nota2);
            printf("%-20s %-20.2f\n", arr[i].apellido, promedio);
        }
    }
}

int main () {
    int num=0;
    printf("Ingrese cantidad de alumnos:");
    scanf("%d",&num);
    t_alumnos arr[num];

    cargarAlumnos(arr, num);
    funcionListado(arr, num);

    return 0;
}