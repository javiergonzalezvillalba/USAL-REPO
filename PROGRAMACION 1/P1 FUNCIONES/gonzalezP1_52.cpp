/*
Realizar una función para convertir segundos en horas, minutos y segundos.
Recibe segundos y “devuelve” horas, minutos y segundos. La función no lee ni
escribe nada.
(sólo es posible utilizando punteros)
*/

#include <stdio.h>

void convertir(int segundos,int *ph,int *pm,int *ps) {
    *ph=segundos / 3600;
    *pm=(segundos % 3600) / 60;
    *ps=segundos % 60;
}

int main() {
    int segundos=0;
    printf("Ingresa una cantidad de segundos: ");
    scanf("%d", &segundos);
    int ph, pm, ps;

    convertir(segundos,&ph,&pm,&ps);

    printf("Segundos: %d. En modo horas:minutos:segundos >>> %d:%d:%d", segundos, ph, pm, ps);

    return 0;
}