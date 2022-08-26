#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    int number1;
    int number2;
    int number3;
    printf("\nIngrese el primer numero: ");
    scanf("%d", &number1);
    printf("\nIngrese el segundo numero: ");
    scanf("%d", &number2);
    printf("\nIngrese el tercer numero: ");
    scanf("%d", &number3);
    printf("\nEl resultado entre la suma de los 3 numeros es: %d", number1 + number2 + number3);
    return;
}