#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main(int argc, char *argv[])
{
    int hourPrice;
    int hoursWorked;

    printf("\nIngrese el precio de la hora: ");
    scanf("%d", &hourPrice);
    printf("\nIngrese las horas trabajadas: ");
    scanf("%d", &hoursWorked);
    printf("\nEl sueldo es: $%d", hourPrice * hoursWorked);
    return;
}