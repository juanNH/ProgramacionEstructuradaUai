#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) {
 float salary;
 int category;
 int monthsWorked;
 float finalSalary;
 printf("\nIngrese el salario: ");
 scanf("%f",&salary);
  printf("\nIngrese la categoria: ");
 scanf("%d",&category);
  printf("\nIngrese los meses trabajados: ");
 scanf("%d",&monthsWorked);
 if(category == 1 && monthsWorked >= 12){
 	finalSalary = salary * monthsWorked + 50*(monthsWorked/12);
 }else{
 	finalSalary = salary * monthsWorked;
 }
 	if(monthsWorked >= 12*5){
 		printf("\nEl salario final es: %.2f",finalSalary);
 	}else{
 			printf("\nEl empleado tiene menos de 5 a?os de antiguedad");
 	}
 	
}
