#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) {
	int number1;
	int number2;
	int number3;
	int addition;
	int average;
	printf("\n Ingrese el numero 1: ");
	scanf("%d",&number1);
	printf("\n Ingrese el numero 2: ");
	scanf("%d",&number2);
	printf("\n Ingrese el numero 3: ");
	scanf("%d",&number3);
	addition = number1 + number2  +number3;
	average = addition/3;
	if(number1 > average){
		printf("\n %d es mayor al promedio",number1);
	}
	if(number2 > average){
		printf("\n %d es mayor al promedio",number2);
	}
	if(number3 > average){
		printf("\n %d es mayor al promedio",number3);
	}
}
