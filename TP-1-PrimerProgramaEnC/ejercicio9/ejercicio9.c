#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define HOUR_PRICE 10
void main(int argc, char *argv[])
{

    int hoursWorked;

    printf("\nIngrese las horas trabajadas: ");
    scanf("%d", &hoursWorked);
    printf("\nEl sueldo es: $%d", HOUR_PRICE * hoursWorked);
    return;
}