#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main(int argc, char *argv[])
{
    int number1;
    int number2;
    int addition;
    int product;
    int substraction;
    printf("\nIngrese el primer numero: ");
    scanf("%d", &number1);
    printf("\nIngrese el segundo numero: ");
    scanf("%d", &number2);
    addition = number1 + number2;
    product = number1 * number2;
    substraction = number1 - number2;
    printf("\nLa suma de los numeros es: %d \n El producto es: %d \n La resta es: %d", addition, product, substraction);
    return;
}