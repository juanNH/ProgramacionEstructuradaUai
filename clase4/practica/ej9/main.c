#include <stdio.h>
#include <stdlib.h>
#define BONUS 100
void main(int argc, char *argv[]) {
	float valuePerHour;
	int timeWorked;
	float salary;
	printf("\n Ingrese el valor de la hora: ");
	scanf("%f",&valuePerHour);
	printf("\n Ingrese el tiempo trabajado: ");
	scanf("%d",&timeWorked);
	salary = valuePerHour * timeWorked;
	if(timeWorked > 50){
		salary += BONUS;
	}
	if(timeWorked > 150){
		salary += BONUS;
	}
	printf("\n El salario total es: %.2f",salary);
}
