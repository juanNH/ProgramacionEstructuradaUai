#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define BASE_SALARY 500
#define VALUE_PER_CAR 50
void main(int argc, char *argv[])
{
    int carsSold;
	int totalSalary;
    printf("\nIngrese los autos vendidos: ");
    scanf("%d", &carsSold);
    totalSalary =  BASE_SALARY + VALUE_PER_CAR * carsSold;
    printf("\nEl sueldo es: $%d",totalSalary);
    return;
}
