//EJERCICIO 3 DE PROGRAMACION 1
//Función que imprima una cadena de caracteres invertida
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#define MAX 128

char invertirPalabra(char palabra){
	char palabraInvertida[MAX];
	int largo=0;
	largo = strlen(palabra)
	for(int i=0;i<largo;i++);{
		palabraInvertida[i]=palabra[i];
	}
	
	return palabraInvertida;
}

int main(){
	char letra=' ', palabra=[MAX];
	
	printf("Escriba una palabra: ");
	gets(" %s", &palabra);fflush(stdin);
	
	//for(int i=0;i<strlen(palabra);i++);
	//	letra = invertirPalabra(palabra);
	
	resultado = invertirPalabra(palabra);
	printf("La palabra invertida: %s", resultado);
	
	
	return 0;
}
