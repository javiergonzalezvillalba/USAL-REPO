/*
Se ingresan y graban en un archivo la información sobre empleados. Preguntar
si se continúa (S/N) después de cada empleado.

nombre, dirección (calle, nro, localidad), edad, sexo (F o M).

Se pide realizar 3 listados por pantalla:

1 listar los empleados menores de 25 años
2 listar los empleados que viven en Pilar
3 listar los empleados que viven en Pilar y son menores de 25 años
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX 128

typedef struct{
	char name[MAX];
	char domCal[MAX];
	int domNum;
	char domLoc[MAX];
	int edad;
	char sexo;
}t_empleado;

t_empleado carga(){
	t_empleado aux;
	printf("name:");
	scanf("%s", aux.name);
	printf("calle:");
	scanf("%s", aux.domCal);
	printf("num calle:");
	scanf("%d", &aux.domNum);
	printf("localidad:");
	scanf("%s", aux.domLoc);
	printf("edad:");
	scanf("%d", &aux.edad);
	printf("sexo (F o M):");
	scanf(" %c", &aux.sexo);
	return aux;
}

void menu(){
	int num=0;
	do{
		printf("\nMENU\n");
		printf("Ingresar opcion:");
		scanf("%d", &num);
		switch(num){
			case 1:
				printf("caso 1");
				break;
			case 2:
				printf("caso 2");
				break;
			case 3:
				printf("caso 3");
				break;
			case 0:
				printf("Salir...");
				break;	
			default:
				printf("Ingrese numero valido\n");
		}
	}while(num!=0);
}

int main (){
	int num=0;
	t_empleado empleado;
	bool seguir = true;
	FILE*F=fopen("empleados.txt", "a");
	
	do{
		printf("Ingrese datos de un empleado:\n");
		printf("name, calle, nro, local, edad, sexo.\n");
		empleado = carga();
		if(F!=NULL){
			fprintf(F,"%s %s %d %s %d %c\n", empleado.name, empleado.domCal,
				empleado.domNum, empleado.domLoc, empleado.edad, empleado.sexo);
		};
		printf("Desea continuar?: (1 o 0):");
		scanf("%d", &num);
		if(num==0)seguir=false;
	}while(seguir);
	fclose(F);
	
	menu();
	
	return 0;
}
