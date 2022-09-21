#include <stdio.h>
#include <stdlib.h>

/* 
5.	En una carrera de autos se ingresan el número de auto y su tiempo, indicar e imprimir cuál ganó y cúal fue el último 

 */

int main(int argc, char *argv[]) {
	int numAuto; float tiempoAuto; int winner; int last; int aux=0; float winnerTime=10000; float lastTime=0;
	
	for(aux =0; aux<5; aux++){
		printf("\n Ingrese el numero de auto: ");
		scanf("%d",&numAuto);
		printf("\n Ingrese el tiempo: ");
		scanf("%f",&tiempoAuto);
		if(winnerTime>tiempoAuto)
		{
			winner= numAuto;
			winnerTime= tiempoAuto;
		}
		if(lastTime<tiempoAuto){ 
			last = numAuto;
			lastTime=tiempoAuto;
		}
	}
	printf("El auto ganador es: %d y el ultimo auto es: %d",winner, last);
	return 0;
}
