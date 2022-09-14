#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) {
 int category;
 int hoursWorked;
 int salary;
   printf("\nIngrese la categoria: ");
 scanf("%d",&category);
  printf("\nIngrese las horas trabajadas: ");
 scanf("%d",&hoursWorked);
 switch(category){
	case 1:
		salary = hoursWorked * 50;
		break;
	case 2:
		salary = hoursWorked * 70;
		break;
	case 3:
		salary = hoursWorked * 80;
		break;
	default:
		printf("Categoria invalida");
		return;
 }
 	
 	printf("\nEl salario final es: %d",salary);
}
