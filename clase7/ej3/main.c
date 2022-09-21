#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
3.	Ingresar los sueldos y nombres de 30 empleados, indicar e imprimir el sueldo mayor y a quién pertenece
 */

int main(int argc, char *argv[]) {

float sueldo;
char nombre[25];
float sueldoMax = 0;
char nombreMax[25];


int aux = 0;
for(aux =0; aux<30; aux++){
	printf("\n Ingrese el sueldo: ");
	scanf("%f",&sueldo);
	printf("\n Ingrese el nombre: ");
	fflush(stdin);
	gets(nombre);
	
	if(sueldoMax<sueldo ){
		sueldoMax=sueldo;
		strcpy(nombreMax, nombre);	
	}
	
}

/*
while(aux< 30){
	printf("\n Ingrese el sueldo: ");
	scanf("%f",&sueldo);
	printf("\n Ingrese el nombre: ");
	fflush(stdin);
	gets(nombre);
	
	if(sueldoMax<sueldo ){
		sueldoMax=sueldo;
		strcpy(nombreMax, nombre);	
	}
	
	aux+=1;
}
 */
	printf("El sueldo mayor: %.2f y la persona es %s",sueldoMax, nombreMax);
	
	return 0;
}
