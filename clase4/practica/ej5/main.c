#include <stdio.h>
#include <stdlib.h>
void main(int argc, char *argv[]) {
	int side1;
	int side2;
	int side3;
	printf("\n Ingrese el lado 1: ");
	scanf("%d",&side1);
	printf("\n Ingrese el lado 2: ");
	scanf("%d",&side2);
	printf("\n Ingrese el lado 3: ");
	scanf("%d",&side3);
	if(side1 != side2 && side1 != side3){
		printf("\n El triangulo es escaleno.");
		return;
	}
	if(side1 == side2 && side1 == side3){
		printf("\n El triangulo es equilatero.");
		return;
	}
	printf("\n El triangulo es isoceles.");
}
