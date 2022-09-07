#include <stdio.h>
#include <stdlib.h>


void main(int argc, char *argv[]) {
	int day;
	int month;
	int year;
	printf("\n Ingrese el dia: ");
	scanf("%d",&day);
	printf("\n Ingrese el mes: ");
	scanf("%d",&month);
	printf("\n Ingrese el año: ");
	scanf("%d",&year);
	if(day<0){
		printf("\n dia negativo");
		return;	
	}
	if(day>31){
	printf("\n dia invalido");
		return;	
	}
	switch(month){
		case 1: case 3 : case 5: case 7: case 8: case 10: case 12:
				if(day>31){
					printf("\n dia invalido par el mes ingresado");
					return;
				}
			break;
		case 4: case 6: case 9: case 11:
				if(day>30){
					printf("\n dia invalido par el mes ingresado");
					return;
				}
			break;
		case 2:
			if( year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)){
				if(day>29){
					printf("\n dia invalido par el mes ingresado y año");
					return;
				}
				break;
			}
			if(day>28){
				printf("\n dia invalido par el mes ingresado");
				return;
			}
			break;
		default:
			printf("\n mes invalido");
			return;
		}
		
		printf("\n fecha valida");
		return;
}
