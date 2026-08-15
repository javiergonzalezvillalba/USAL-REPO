//EJERCICIO 4 DE PROGRAMACION 1
//programa para estudiar estrategias de marketing de un local
//registrar todos los cobros hechos y para cada uno:
// monto (double, mayor a cero)
// medio de pago (char, E: efectivo, C: crédito)
//FUNCION PARA EL PROMEDIO

#include <stdio.h>
#include <ctype.h>
#define MAX 5

int main(){
	
	double monto=0, montos[MAX], suma=0, promedioE=0, promedioC=0;
	char letra=' ', medioPago[MAX];
	int num=0, cantE=0, cantC=0;
	
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
				for(int i=0;i<MAX;i++){
					if(medioPago=='E'){
						printf("Cliente %d: monto: %.2lf\n",i,montos[i]);
						suma=suma+montos[i];
						cantE=cantE+1;
					}
				}
				promedioE= suma/cantE;
				printf("PROMEIDO PAGOS EFECTIVO: %.2lf",promedioE);
				break;
			case 2:
				printf("listado de credito y promedio\n");
				printf("listado de credito y promedio\n");
				for(int i=0;i<MAX;i++){
					if(medioPago=='C'){
						printf("Cliente %d: monto: %.2lf\n",i,montos[i]);
						suma=suma+montos[i];
						cantC=cantC+1;
					}
				}
				promedioC= suma/cantC;
				printf("PROMEIDO PAGOS CREDITO: %.2lf",promedioC);
				break;	
			default: 
				printf("Numero no valido. Debe ser 1, 2 o 0.\n");
				num=0;
		}
	}while(num!=0);
	
	return 0;
}
