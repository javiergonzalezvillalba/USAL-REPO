//EJERCICIO 2 DE PROGRAMACION 1
//Función que determine si un número es primo.
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int calculoPrimo(int num){
	bool esPrimo=true;
	if (num <= 1) {
        esPrimo = false;
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                esPrimo = false;
            }
        }
    }
	return esPrimo;
}

int main(){
	int num=0, resultado=0;
	
	printf("Escribe un numero: ");
	scanf("%d",&num);
	
	resultado = calculoPrimo(num);
	if(resultado) printf("El numero es primo."); else printf("El numero no es primo");
	return 0;
}
