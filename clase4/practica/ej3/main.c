#include <stdio.h>
#include <stdlib.h>


void main(int argc, char *argv[]) {
	int number1;
	int number2;
	int product;
	printf("Ingrese el numero 1: ");
	scanf("%d", &number1);
	printf("\n Ingrese el numero 2: ");
	scanf("%d", &number2);
	if(number1 > number2){
		product = number1 * number2;
		printf("\n El producto entre el numero 1 y 2 es: %d ",product);
		return;
	}
	if(number1 == number2){
		printf("\n Los numeros son iguales.")
	}
	
}
