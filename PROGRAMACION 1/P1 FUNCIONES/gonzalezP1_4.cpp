//EJERCICIO 4 DE PROGRAMACION 1
//programa para estudiar estrategias de marketing de un local
//registrar todos los cobros hechos y para cada uno:
// monto (double, mayor a cero)
// medio de pago (char, E: efectivo, C: crédito)
//FUNCION PARA EL PROMEDIO

#include <stdio.h>
#include <ctype.h>
#define MAX 3

void efectivo(double montos[],char medioPago[]) {
	double suma=0, promedio=0, cant=0;

	printf("Listado de efectivo: \n");
	printf("-%20s -%20s -%20s\n", "NUMERO", "TIPO", "MONTO");
	for(int i=0;i<MAX;i++) {
		if(medioPago[i]=='E'){
			printf("-%20d -%20c -%20.2f\n", i, medioPago[i], montos[i]);
			suma+=montos[i];
			cant++;
		}
	}
	promedio=suma/cant;
	printf("El promedio de efectivo es %.2f\n",promedio);
}

void credito(double montos[],char medioPago[]) {
	double suma=0, promedio=0, cant=0;

	printf("Listado de credito: \n");
	printf("-%20s -%20s -%20s\n", "NUMERO", "TIPO", "MONTO");
	for(int i=0;i<MAX;i++) {
		if(medioPago[i]=='C'){
			printf("-%20d -%20c -%20.2f\n", i, medioPago[i], montos[i]);
			suma+=montos[i];
			cant++;
		}
	}
	promedio=suma/cant;
	printf("El promedio de credito es %.2f\n",promedio);
}

int main(){
	double monto=0, montos[MAX];
	char letra=' ', medioPago[MAX];
	int num=0;
	
	for(int i=0;i<MAX;i++){
		do{
		printf("CLIENTE %d, monto; ",i);
		scanf("%lf", &monto);fflush(stdin);
		montos[i]=monto;
		}while(monto<=0);

		do{
		printf("CLIENTE %d, medio de pago; ",i);
		scanf("%c", &letra);
		letra=toupper(letra);
		medioPago[i]=letra;
		}while(letra!='C' and letra!='E');
	}
	
	do{
		printf("MENU: 1 listado efectivo, 2 listado credito, 0 salir.");
		scanf("%d",&num);
		switch(num){
			case 1:
				printf("listado de efectivo y promedio\n");
				efectivo(montos,medioPago);
				break;
			case 2:
				printf("listado de credito y promedio\n");
				credito(montos,medioPago);
				break;	
			default: 
				printf("Numero no valido. Debe ser 1, 2 o 0.\n");
		}
	}while(num!=0);
	
	return 0;
}