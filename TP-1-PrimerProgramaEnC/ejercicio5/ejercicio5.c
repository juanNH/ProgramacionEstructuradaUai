#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main(int argc, char *argv[])
{
    int side1;
    int side2;
    int hypotenuse;
    int perimeter;
    int area;
    printf("\nIngrese el primer lado: ");
    scanf("%d", &side1);
    printf("\nIngrese el segundo lado: ");
    scanf("%d", &side2);
    area = (side1 * side2) / 2;
    hypotenuse = sqrt(side1 * side1 + side2 * side2);
    perimeter = side1 + side2 + hypotenuse;
    printf("\nEl area del triangulo es: %d \n La hipotenusa es: %d \n El perimetro es: %d", area, hypotenuse, perimeter);
    return;
}