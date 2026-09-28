#include <stdio.h>
#include <math.h>
int main(int argc, char** argv) {
    int n;
    int bit64, bit32, bit16, bit8, bit4, bit2;

    printf("Entre com o valor N: ");
    scanf("%d", &n);

    bit64 = n % 2;
    n = n / 2;

    bit32 = n % 2;
    n = n / 2;

    bit16 = n % 2;
    n = n / 2;

    bit8 = n % 2;
    n = n / 2;

    bit4 = n % 2;
    n = n / 2;

    bit2 = n % 2;

    printf("O numero em binario = %d%d%d%d%d%d\n",
           bit64, bit32, bit16, bit8, bit4, bit2);

    return 0;
                
				}
				
				#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {
	int x1, x2, y1, y2; float dist, cat1, cat2;
	printf("Qual o valor de X1 e Y1 no 1 Plano Cartesiano?");
	scanf("%d", &x1); scanf("%d", &y1);
	printf("Qual o valor de X2 e Y2 no 2 Plano Cartesiano?");
	scanf("%d", &x2); scanf("%d", &y2);
	dist=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("Distancia:%f", dist);
		return 0;
	}
    
    
    
