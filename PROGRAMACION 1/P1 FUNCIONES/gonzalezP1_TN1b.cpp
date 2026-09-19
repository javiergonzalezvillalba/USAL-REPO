#include <stdio.h>
#define COL 2

void cargarMatriz(float m[][COL],int num) {
    float a=0, b=0;
    for (int i=0; i<num; i++) {
        printf("Rectangulo %d:\n", i+1);
        printf("Base:");
        scanf("%f",&a);
        m[i][0]=a;
        printf("Altura:");
        scanf("%f",&b);
        m[i][1]=b;
    }

}

void listado(float m[][COL], int num) {
    float sup=0.0, suma=0.0, promedio=0.0;
    printf("%-10s %-15s %-15s %-15s\n", "Rectangulo", "Base", "Altura", "Superficie");
    for (int i=0; i<num; i++) {
        sup=(m[i][0]*m[i][1])/2;
        printf("%-10d %-15.2f %-15.2f %-15.2f\n", i+1, m[i][0], m[i][1], sup);
        suma=suma+sup;
    }
    promedio=suma/num;
    printf("El promedio de superficies es: %.2f\n", promedio);
}

int main() {
    int num=0;
    float suma=0.0;
    printf("Ingrese cant rectangulos:");
    scanf("%d", &num);
    float m[num][COL];
    cargarMatriz(m, num);
    listado(m,num);
    return 0;
}