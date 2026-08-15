//EJERCICIO 1 V2 DE PROGRAMACION 1
//Calcule el factorial de un número

#include <stdio.h>
#include <ctype.h>

int calcularFactorial(int num){
	int factorizado=1;
    for (int i=num; i > 1; i--) {
        factorizado *= i;
    }
    return factorizado;
}

int main(){
    int num=0, resultado=0;

    printf("Ingrese un numero: ");
    scanf("%d",&num);
    resultado = calcularFactorial(num);
    printf("El resultado del factorial es: %d.", resultado);

    return 0;
}
