/*
 * Disciplina: Linguagem e Técnicas de Programação
 * Atividade : Laço, Vetor e Função
 * Todos os exercícios estão em um único código-fonte; a main os executa em ordem.
 *
 * Compilar: gcc atividade.c -o atividade -lm
 */
#include <stdio.h>
#include <math.h>

#define N 100   /* tamanho dos vetores de 100 inteiros */

/* ---------------------------------------------------------------
 * 1) Lê 100 inteiros, imprime na ordem inversa da leitura
 *    e depois ordenados do maior para o menor.
 * --------------------------------------------------------------- */
void exercicio1(void) {
    int v[N], i, j, aux;

    printf("\n=== Exercicio 1 ===\n");
    for (i = 0; i < N; i++) {
        printf("Numero %d de %d: ", i + 1, N);
        scanf("%d", &v[i]);
    }

    /* Ordem inversa: percorre o vetor do último para o primeiro */
    printf("Ordem inversa da leitura:\n");
    for (i = N - 1; i >= 0; i--)
        printf("%d ", v[i]);
    printf("\n");

    /* Ordenação do maior para o menor (bubble sort decrescente) */
    for (i = 0; i < N - 1; i++)
        for (j = 0; j < N - 1 - i; j++)
            if (v[j] < v[j + 1]) {          /* troca se estiver fora de ordem */
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }

    printf("Do maior para o menor:\n");
    for (i = 0; i < N; i++)
        printf("%d ", v[i]);
    printf("\n");
}

/* ---------------------------------------------------------------
 * 2) Lê um double positivo e imprime em notação científica A x 10^n,
 *    com 1 <= A < 10 e n inteiro.
 * --------------------------------------------------------------- */
void notacaoCientifica(double x, double *A, int *n) {
    *n = 0;
    if (x > 0) {
        while (x >= 10.0) { x /= 10.0; (*n)++; }   /* número grande: expoente sobe */
        while (x < 1.0)   { x *= 10.0; (*n)--; }   /* número pequeno: expoente desce */
    }
    *A = x;
}

void exercicio2(void) {
    double x, A;
    int n;

    printf("\n=== Exercicio 2 ===\n");
    printf("Digite um valor double positivo: ");
    scanf("%lf", &x);

    notacaoCientifica(x, &A, &n);
    printf("%g = %.6f x 10^%d\n", x, A, n);
}

/* ---------------------------------------------------------------
 * 3) Lê n (positivo, n <= 64) e mostra o valor em binário.
 * --------------------------------------------------------------- */
void imprimeBinario(unsigned int n) {
    int bits[64], i, qtd = 0;

    if (n == 0) { printf("0"); return; }

    /* divisões sucessivas por 2: os restos formam os bits (de trás para frente) */
    while (n > 0) {
        bits[qtd++] = n % 2;
        n /= 2;
    }
    for (i = qtd - 1; i >= 0; i--)
        printf("%d", bits[i]);
}

void exercicio3(void) {
    int n;

    printf("\n=== Exercicio 3 ===\n");
    do {
        printf("Digite n (positivo e <= 64): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 64);               /* valida a restrição do enunciado */

    printf("%d em binario = ", n);
    imprimeBinario((unsigned int)n);
    printf("\n");
}

/* ---------------------------------------------------------------
 * 4) (URI 1013) Lê 10 valores e mostra o maior seguido de "eh o maior".
 *    A fórmula só compara DOIS valores; por isso o maior atual é
 *    comparado com cada novo valor lido (segundo passo).
 * --------------------------------------------------------------- */
double maiorAB(double a, double b) {
    return (a + b + fabs(a - b)) / 2.0;
}

void exercicio4(void) {
    double v[10], maior;
    int i;

    printf("\n=== Exercicio 4 ===\n");
    for (i = 0; i < 10; i++) {
        printf("Valor %d de 10: ", i + 1);
        scanf("%lf", &v[i]);
    }

    maior = v[0];
    for (i = 1; i < 10; i++)
        maior = maiorAB(maior, v[i]);         /* acumula o maior até o momento */

    printf("%g eh o maior\n", maior);
}

/* ---------------------------------------------------------------
 * 5) Vetor de 100 inteiros: verifica paridade e primalidade de cada item.
 * --------------------------------------------------------------- */
int ehPar(int x) {
    return x % 2 == 0;
}

int ehPrimo(int x) {
    int d;
    if (x < 2) return 0;                      /* 0, 1 e negativos não são primos */
    for (d = 2; d * d <= x; d++)              /* basta testar até a raiz de x */
        if (x % d == 0) return 0;
    return 1;
}

void exercicio5(void) {
    int v[N], i;

    printf("\n=== Exercicio 5 ===\n");
    for (i = 0; i < N; i++) {
        printf("Numero %d de %d: ", i + 1, N);
        scanf("%d", &v[i]);
    }

    for (i = 0; i < N; i++)
        printf("v[%d] = %d -> %s e %s\n", i, v[i],
               ehPar(v[i]) ? "par" : "impar",
               ehPrimo(v[i]) ? "primo" : "nao primo");
}

/* ---------------------------------------------------------------
 * 6) Lê 4 vetores de 10 posições (x1, y1, x2, y2). Cada posição i
 *    representa os pontos p1(x1[i],y1[i]) e p2(x2[i],y2[i]).
 *    Mostra a distância euclidiana entre eles.
 * --------------------------------------------------------------- */
double distancia(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void leVetor(const char *nome, double v[], int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        printf("%s[%d]: ", nome, i);
        scanf("%lf", &v[i]);
    }
}

void exercicio6(void) {
    double x1[10], y1[10], x2[10], y2[10];
    int i;

    printf("\n=== Exercicio 6 ===\n");
    leVetor("x1", x1, 10);
    leVetor("y1", y1, 10);
    leVetor("x2", x2, 10);
    leVetor("y2", y2, 10);

    for (i = 0; i < 10; i++)
        printf("Distancia entre p1(%g,%g) e p2(%g,%g) = %.4f\n",
               x1[i], y1[i], x2[i], y2[i],
               distancia(x1[i], y1[i], x2[i], y2[i]));
}

/* ---------------------------------------------------------------
 * 7) Vetor de 100 inteiros: encontra e mostra os valores que estão em
 *    ordem consecutiva (posições vizinhas, cada uma valendo o anterior + 1,
 *    ex.: 4 5 6 7). Cada sequência encontrada é mostrada.
 * --------------------------------------------------------------- */
void exercicio7(void) {
    int v[N], i, ini, achou = 0;

    printf("\n=== Exercicio 7 ===\n");
    for (i = 0; i < N; i++) {
        printf("Numero %d de %d: ", i + 1, N);
        scanf("%d", &v[i]);
    }

    i = 0;
    while (i < N - 1) {
        if (v[i + 1] == v[i] + 1) {           /* início de uma sequência */
            ini = i;
            while (i < N - 1 && v[i + 1] == v[i] + 1)
                i++;                          /* estende enquanto continuar consecutivo */
            printf("Sequencia consecutiva: ");
            for (; ini <= i; ini++)
                printf("%d ", v[ini]);
            printf("\n");
            achou = 1;
        } else {
            i++;
        }
    }

    if (!achou)
        printf("Nenhum valor em ordem consecutiva.\n");
}

int main(void) {
    exercicio1();
    exercicio2();
    exercicio3();
    exercicio4();
    exercicio5();
    exercicio6();
    exercicio7();
    return 0;
}
