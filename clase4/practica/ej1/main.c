#include <stdio.h>
#include <stdlib.h>
void main(int argc, char *argv[]) {
	int number1;
	int number2;
	printf("Ingrese el numero 1: ");
	scanf("%d", &number1);
	printf("\n Ingrese el numero 2: ");
	scanf("%d", &number2);
	if(number1 == number2){
		printf("\n Los numeros son iguales.");
	}else{
		printf("\n Los numeros no son iguales.");
	}
}
