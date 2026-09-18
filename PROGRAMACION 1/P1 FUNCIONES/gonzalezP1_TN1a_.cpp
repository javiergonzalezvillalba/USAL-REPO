#include <stdio.h>
#define COL 2
#define IN 2
#define OUT 3

void cargarMatriz(int m[][COL], int num) {
    int x=0, y=0;
    for (int i=0;i<num;i++) {
        printf("Ingrese el valor de x:");
        scanf("%d",&x);
        m[i][0]=x;
        printf("Ingrese el valor de y:");
        scanf("%d",&y);
        m[i][1]=y;
    }
}

int main() {
    int n1=0, n2=0, num=0, suma=0;
    printf("Ingrese cantidad de tiros:");
    scanf("%d",&num);
    int m[num][COL];
    cargarMatriz(m, num);

    for (int i=0;i<num;i++) {
        if (m[i][0]>=90 && m[i][1]>=10 && m[i][1]<=40) {
            suma=suma+IN;
        }else suma=suma+OUT;
    }
    printf("Con %d tiros se hicieron %d puntos totales.", num, suma);

    return 0;
}