#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    int side1;
    int side2;
    int side3;
    printf("\nIngrese el primer lado: ");
    scanf("%d", &side1);
    printf("\nIngrese el segundo lado: ");
    scanf("%d", &side2);
    printf("\nIngrese el tercer lado: ");
    scanf("%d", &side3);
    printf("\nEl perimetro del triangulo es: %d", side1 + side2 + side3);
    return;
}