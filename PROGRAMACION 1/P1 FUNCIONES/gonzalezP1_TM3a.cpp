#include <stdio.h>
#include <string.h>
#define LONG 7
#define DIA 8

typedef struct{
    char placa[LONG];
    int horas;
}t_autos;

t_autos cargar(){
    t_autos aux;
    printf("Ingrese placa:");
    scanf("%s",aux.placa);
    printf("Ingrese horas:");
    scanf("%d",&aux.horas);
    return aux;
};

void cargarRep(t_autos autos[], int num) {
    for(int i=0;i<num;i++) {
        autos[i]=cargar();
    }
}

int main() {
    int num=0;
    printf("Ingrese cantidad de reparaciones:");
    scanf("%d",&num);
    t_autos autos[num];
    cargarRep(autos,num);

    return 0;
}