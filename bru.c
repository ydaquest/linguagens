#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main () {
	float base, altura, area;
	printf ("insira o valor da base\n");
	scanf("%f",%base);
	printf("insira o valor para altura\n");
	scanf("%f",%altura);
	area=(base*altura)/2;
	printf("a area do triangulo= %0.2f", area)
	return 0;
} 

