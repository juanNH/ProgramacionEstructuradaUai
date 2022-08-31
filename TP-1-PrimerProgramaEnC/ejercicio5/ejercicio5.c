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
    scanf("%f", &side1);
    printf("\nIngrese el segundo lado: ");
    scanf("%f", &side2);
    area = (side1 * side2) / 2;
    hypotenuse = sqrt(side1 * side1 + side2 * side2);
    perimeter = side1 + side2 + hypotenuse;
    printf("\nEl area del triangulo es: %.2f \n La hipotenusa es: %.f2 \n El perimetro es: %.f2", area, hypotenuse, perimeter);
    return;
}
