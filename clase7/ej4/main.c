#include <stdio.h>
#include <stdlib.h>

/* 
4.	Ingresar las edades y estaturas de los alumnos, calculare imprimir la edad promedio, la edad mayor y la estatura menor, los datos finalizan con edad = 0
 */

int main(int argc, char *argv[]) {
	
	int edad; float estatura; float edadPromedio = 0; int edadMayor = 0; float estaturaMenor= 5; int edadAcumulador =0; int contadorAlumnos = 0;
	do
	{
	printf("\n  Ingrese la edad ");
	scanf("%d", &edad);
	printf("\n  Ingrese la estatura ");
	scanf("%f", &estatura);
		if(edadMayor<edad){
			edadMayor = edad;
		}
		if(estaturaMenor>estatura){
			estaturaMenor = estatura;
		}
		if(edad!=0){
			edadAcumulador += edad;
			contadorAlumnos +=1;
		}

	}
	while(edad!=0);
	edadPromedio = edadAcumulador / contadorAlumnos;
	
		printf("\n  Edad mayor: %d \n Estatura menor: %.2f \n Edad promedio: %.2f", edadMayor ,estaturaMenor,edadPromedio);
	return 0;
}
