#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop for */


int main(int argc, char *argv[]) {
		
		float temperature;
		float maxTemperature = -1;
		float minTemperature;
		int isFirstLoad = 1;
		int newMaxValues=0;
		int newMinValues=0;	
		int i=0;
		for(i=0; i<10; i++){
			printf("\n Ingrese una temperatura: ");
			scanf("%f",&temperature);
			if(isFirstLoad == 1){
				maxTemperature=temperature;
				minTemperature=temperature;
				newMaxValues +=1;
				newMinValues +=1;
				isFirstLoad=0;
			}else{
				if(temperature>maxTemperature){
					maxTemperature = temperature;
					newMaxValues +=1;
				}
				if(temperature<minTemperature){
					minTemperature = temperature;
					newMinValues +=1;
				}
			}
		}
		printf("\n El valor maximo es %.2f y el minimo es %.2f",maxTemperature, minTemperature);
		printf("\n La cantidad de maximos ingresados fueron: %d y la cantidad ed minimos fueron: %d",newMinValues,newMaxValues);
		
		
	
		
	return 0;
}
