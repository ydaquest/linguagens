#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141597

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	float r, area;
	printf("insira o raio r no circulo\n");
	scanf("%d",&r);
	area-pi *(r*r);
	peintf("a area do circulo de raio r %0.2f",r, area);
	
	
	float baseMaior = 10;
	float baseMenor = 6;
	float altura = 4;
	float areaTrapezio;
	
	areaTrapezio= ((baseMaior + baseMenor) *
	altura) / 2;
	
	printf ("a rea do trapezio e: %.2f", areaTrapezio);
	return 0;
}
