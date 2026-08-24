//EJERCICIO 3 DE PROGRAMACION 1
//Funcion que imprima una cadena de caracteres invertida

#include <stdio.h>
#include <ctype.h>
#define MAX 128

void invertirPalabra(char palabra[]){
	int i=0;
	while (palabra[i] != '\0') {
		i++;
	}

	for (int j=i;j>=0;j--) {
		printf("%c",palabra[j]);
	}
	printf("\n");
}

int main(){
	char palabra[MAX];
	
	printf("Escriba una palabra: ");
	fgets(palabra, sizeof(palabra), stdin);fflush(stdin);

	printf("La palabra invertida: ");
	invertirPalabra(palabra);

	return 0;
}