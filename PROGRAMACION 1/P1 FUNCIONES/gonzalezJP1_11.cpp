/* GONZALEZ JAVIER ejercicio 11 p1
Dado un vector de T elementos enteros, desarrollar una función que:
- reciba como parámetro el vector
- busque el valor MÍNIMO
- devuelva el valor MÌNIMO
*/

#include <cstdio>
#define MAX 5

int buscaMin(int lista[], int n){
	int min=lista[0], pos=0;
	for(int i=0;i<n;i++){
		if(lista[i]<=min){
			min=lista[i];
			pos=i;
		}
	}
	printf("En la posicion %d se encontro el minimo: ", pos);
	return min; 
}

int main(){
	int lista[MAX]={36,43,64,32,34};	
	int n=MAX, minimo=0;
	
	minimo = buscaMin(lista,n);
	printf("%d",minimo);
	
	return 0;
}