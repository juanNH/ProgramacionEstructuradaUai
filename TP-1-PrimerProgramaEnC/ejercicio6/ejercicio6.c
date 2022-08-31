#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main(int argc, char *argv[])
{
    float side1;
    float side2;
    float hypotenuse;
    float perimeter;
    float area;
    printf("\nIngrese el primer lado: ");
    scanf("%d", &side1);
    printf("\nIngrese el segundo lado: ");
    scanf("%d", &side2);
    area = side1 * side2;
    hypotenuse = sqrt(side1 * side1 + side2 * side2);
    perimeter = side1 * 2 + side2 * 2;
    printf("\nEl area del rectangulo es: %.2f \n La hipotenusa es: %.2f \n El perimetro es: %.2f", area, hypotenuse, perimeter);
    return;
}
