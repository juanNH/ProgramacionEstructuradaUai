#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) {
	int number1;
	int number2;
	int substraction;
	printf("Ingrese el primer numero: \n");
	scanf("%d",&number1);
	printf("Ingrese el segundo numero: \n");
	scanf("%d",&number2);
	if(number1<=number2){
		substraction = number2 - number1;
	}else{
		substraction = number1 - number2;
	}
	printf("\n El resultado de la resta es %d",substraction);
}
