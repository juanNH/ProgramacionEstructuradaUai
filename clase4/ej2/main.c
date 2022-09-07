#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) {
	int month;
	printf(" Ingrese numero de mes: ");
	scanf("%d",&month);
	switch(month){
		case 1: case 3 : case 5: case 7: case 8: case 10: case 12:
				printf("\nmes con 31 dias");
			break;
		case 4: case 6: case 9: case 11:
				printf("\nmes con 30 dias");
			break;
		default:
			printf("\nmes con 28 o 29 dias");
	}
}
