#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) {
	int number = 10;
	
	if(number< 10){
		printf("el numero es menor a 10");
		return;
	}
	if(number == 10){
		printf("el numero es igual a 10");
		return;
	}
	printf("el numero es mayor a 10 o igual");
}
