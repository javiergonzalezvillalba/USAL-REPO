/* GONZALEZ JAVIER ejercicio 13 p1
Merge de dos arreglos
Comparar 2 arreglos con 10 elementos enteros y generar un tercer vector
también ordenado con todos los elementos sin los repetidos.
Generar los dos arreglos con enteros entre 0 y 30 al azar. Utilizar la función:
int rand().
Es necesario primero ordenar los arreglos y luego realizar el merge
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

void bubbleSort(int arr[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main(){
	srand(time(NULL));
	int a[MAX], b[MAX], c[MAX*2];
	
	//creo los arreglos a y b con numeros aleatorios
	for(int i=0;i<MAX;i++){
		a[i]=rand() % 30;
		b[i]=rand() % 30;
		//visualizo los numeros de los arreglos
		printf("%d y %d\n", a[i],b[i]);
	}
	
	//ordeno los arreglos
	bubbleSort(a, MAX); bubbleSort(b, MAX);
	
	//visualizo los numeros de los arreglos ordenados
	for(int i=0;i<MAX;i++){
		printf("%d y %d\n", a[i],b[i]);
	}
	
	for(int i=0, j=0; i<MAX*2;){
		if(a[i]>b[j]){
		}
		else if(a[i]<b[j]){
		}
		else if(a[i]==b[j]){
		}
	}
	
	for(int i=0;i<MAX*2;i++){
		printf("%d\n",c[i]);
	}
	
	return 0;
}
