#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    int number1;
    int number2;

    printf("\nIngrese el primer numero: ");
    scanf("%d", &number1);
    printf("\nIngrese el segundo numero: ");
    scanf("%d", &number2);
    printf("\nEl resultado de la suma de ambos es %d", number1 + number2);
    return;
}