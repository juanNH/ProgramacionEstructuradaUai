#include <stdio.h>
#include <stdlib.h>

/* 
6.	Ingresar el precio de N artículos, indicar e imprimir el más caro, el más barato, el precio promedio  y la suma de todos los precios
 */

int main(int argc, char *argv[])
{
int art; int artBarato; int artCaro; float precio; float precioPromedio; float sumPrecio; float precioBarato = 50000000 ; float precioCaro= 0; int cantidadArt=0; float precioTotal = 0;

do{
	
	printf("\n Ingrese el numero del articulo: ");
	scanf("%d",&art);
	printf("\n Ingrese el precio ");
	scanf("%f",&precio);
	if(precioBarato > precio && precio > 0){
		precioBarato = precio;
		artBarato = art;	
	}
	if (precioCaro<precio){
		precioCaro=precio;
		artCaro= art;
	}
	if(precio > 0){
		precioTotal+= precio;
		cantidadArt+=1;
	}
} while ( precio>0);

precioPromedio = precioTotal/cantidadArt;

	printf("\n Articulo mas caro: %d \n Articulo mas barato: %d \n Precio promedio: %.2f",artCaro,artBarato,precioPromedio);
 
	return 0;
}
