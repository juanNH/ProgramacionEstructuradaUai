#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) {
	int agePerson1;
	int agePerson2;
	float heigthPerson1;
	float heigthPerson2;
	printf("\n Ingrese la edad de la persona 1: ");
	scanf("%d",&agePerson1);
	printf("\n Ingrese la altura de la persona1: ");
	scanf("%f",&heigthPerson1);
	printf("\n Ingrese la edad de la persona 2: ");
	scanf("%d",&agePerson2);
	printf("\n Ingrese la altura de la persona2: ");
	scanf("%f",&heigthPerson2);
	if(agePerson1<agePerson2){
		printf("/n La altura del mayor es de: %.2f m",heigthPerson2);
	}
	if(agePerson1>agePerson2){
		printf("/n La altura del mayor es de: %.2f m",heigthPerson1);
	}
}
