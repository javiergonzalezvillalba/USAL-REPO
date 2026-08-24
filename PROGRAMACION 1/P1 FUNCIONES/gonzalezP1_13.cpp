/* GONZALEZ JAVIER ejercicio 13
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
	int a[MAX], b[MAX], c[MAX*2], cant=0;
	
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

	printf("------------------------------------\n");
	int j=0, k=0, num=0;
	while (j<MAX && k<MAX) {
		//condicionales del numero a ingresar en c
		if(a[j]>b[k]) {
			num=b[k];
			k++;
		}
		else if(a[j]<b[k]) {
			num=a[j];
			j++;
		}else {
			num=a[k];
			j++;
			k++;
		}

		//agregando num en c
		if (cant==0 || c[cant-1]!=num) {
			c[cant]=num;
			cant++;
		}

	}
	// Vaciar los elementos sobrantes si el arreglo 'a' todavía tiene pendientes
	while (j < MAX) {
		if (cant == 0 || c[cant - 1] != a[j]) {
			c[cant] = a[j];
			cant++;
		}
		j++;
	}
	// Vaciar los elementos sobrantes si el arreglo 'b' todavía tiene pendientes
	while (k < MAX) {
		if (cant == 0 || c[cant - 1] != b[k]) {
			c[cant] = b[k];
			cant++;
		}
		k++;
	}

	printf("------------------------------------\n");
	printf("Vector C resultante (sin repetidos):\n");
	for(int i=0;i<cant;i++){
		printf("[%d] ",c[i]);
	}
	printf("\n");

	return 0;
}
