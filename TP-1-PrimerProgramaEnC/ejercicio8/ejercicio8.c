#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main(int argc, char *argv[])
{
    float hourPrice;
    float hoursWorked;
	float salary;
    printf("\nIngrese el precio de la hora: ");
    scanf("%f", &hourPrice);
    printf("\nIngrese las horas trabajadas: ");
    scanf("%f", &hoursWorked);
    salary= hourPrice + hoursWorked;
    printf("\nEl sueldo es: $%.2f", salary);
    return;
}
