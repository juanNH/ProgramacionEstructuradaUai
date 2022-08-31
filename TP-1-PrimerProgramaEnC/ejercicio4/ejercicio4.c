#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    float side1;
    float side2;
    float side3;
    float perimeter;
    printf("\nIngrese el primer lado: ");
    scanf("%f", &side1);
    printf("\nIngrese el segundo lado: ");
    scanf("%f", &side2);
    printf("\nIngrese el tercer lado: ");
    scanf("%f", &side3);
    perimeter = side1 + side2 + side3;
    printf("\nEl perimetro del triangulo es: %.2f", perimeter);
    return;
}
