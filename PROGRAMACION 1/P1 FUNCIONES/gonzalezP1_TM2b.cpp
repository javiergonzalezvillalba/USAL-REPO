#include <stdio.h>
#define FIL 8
#define COL 2

void cargarMatriz(int m[][COL]) {
    int desde=0, donde=0;
    for (int i=0; i<FIL; i++) {
        printf("Viaje %d: \n", i+1);
        printf("Desde:");
        scanf("%d", &desde);
        m[i][0]=desde;
        printf("Hasta:");
        scanf("%d", &donde);
        m[i][1]=donde;
    }
}

int main() {
    int n1=0, n2=0, m[FIL][COL];
    bool existe=false;
    cargarMatriz(m);

    printf("Desde donde viaja?:");
    scanf("%d", &n1);
    printf("Hasta donde viaja?:");
    scanf("%d", &n2);

    for (int i=0; i<FIL; i++) {
        if (m[i][0]==n1 && m[i][1]==n2) {
            existe=true;
        }
    }
    if (existe) {
        printf("El viaje es posible! :D\n");
    }else printf("El viaje no es posible! :(\n");

    return 0;
}