#include <stdio.h>
#include <stdlib.h>


void main(int argc, char *argv[]) {
	int number;
	printf("Ingrese el numero: ");
	scanf("%d",&number);
	if(number < 0){
		printf("\nEl numero es negativo");
	}else if(number>0){
		printf("\nEl numero es positivo");
	}else {
		printf("\nEl numero es 0");
	}
}
