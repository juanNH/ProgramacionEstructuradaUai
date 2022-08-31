#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define HOUR_PRICE 10
void main(int argc, char *argv[])
{

    float hoursWorked;
	float salary
    printf("\nIngrese las horas trabajadas: ");
    scanf("%d", &hoursWorked);
    salary = HOUR_PRICE * hoursWorked
    printf("\nEl sueldo es: $%d", salary);
    return;
}
