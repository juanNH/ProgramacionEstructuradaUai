#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SALARY 500
#define VALUE_PER_CAR 50
void main(int argc, char *argv[])
{

    int carsSold;

    printf("\nIngrese los autos vendidos: ");
    scanf("%d", &carsSold);
    printf("\nEl sueldo es: $%d", SALARY + VALUE_PER_CAR * carsSold);
    return;
}