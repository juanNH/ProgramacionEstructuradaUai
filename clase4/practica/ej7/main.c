#include <stdio.h>
#include <stdlib.h>
void main(int argc, char *argv[]) {
		int number1;
	int number2;
	int number3;
	int number4;
	int addition1;
	int addition2;
	printf("\n Ingrese el numero 1: ");
	scanf("%d",&number1);
	printf("\n Ingrese el numero 2: ");
	scanf("%d",&number2);
	printf("\n Ingrese el numero 3: ");
	scanf("%d",&number3);
	printf("\n Ingrese el numero 4: ");
	scanf("%d",&number4);
	addition1 = number1 + number2;
	addition2 = number3 + number4;
	if(addition1>addition2){
		printf("La suma entre el primer y segundo numero es el mayor");
		return;
	}
	if(addition1<addition2){
		printf("La suma entre el tercer y cuarto numero es el mayor");
		return;
	}
}
