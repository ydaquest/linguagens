#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Exercicio simples, bom para praticar variaveis e operacoes
void idade() {
    int a, idade;

    printf("Digite o ano em que voce nasceu: ");
    scanf("%d", &a);

    idade = 2026 - a;

    printf("Se voce nasceu em %d sua idade e %d\n", a, idade);
}

// Achei esse exercicio bom para praticar conversao de unidades
void conversaokm() {
    float km, ms;

    printf("Para converter km/h em m/s, diga quantos KM/h quer converter: ");
    scanf("%f", &km);

    ms = km / 3.6;

    printf("O valor convertido de %.1f Km/h e = %.1f M/s\n", km, ms);
}

// Exercicio interessante para treinar calculos com valores decimais
void dolar() {
    float reais, dolar, cotacao;

    printf("Digite o valor que quer converter: ");
    scanf("%f", &reais);

    printf("Digite a cotacao do dolar: ");
    scanf("%f", &dolar);

    cotacao = reais * dolar;

    printf("Seu valor de %.2f convertido na cotacao atual de %.2f = %.2f\n",
           reais, dolar, cotacao);
}

// Gostei desse porque trabalha com uma formula matematica simples
void grausf() {
    float c, f;

    printf("Para converter para Fahrenheit, quantos graus esta fazendo? ");
    scanf("%f", &c);

    f = c * 9.0 / 5.0 + 32.0;

    printf("Convertendo %.1f C temos %.1f F\n", c, f);
}

// Bom exercicio para praticar formulas e trabalhar com numeros decimais
void conversao_radiano() {
    float G, R;

    printf("Digite o valor do angulo em graus: ");
    scanf("%f", &G);

    R = G * 3.141592 / 180.0;

    printf("%.4f radianos\n", R);
}

// Exercico simples, mas bom para fixar a ideia de antecessor e sucessor
void antecessor_sucessor() {
    int n;

    printf("Entre com valor de N: ");
    scanf("%d", &n);

    printf("O numero %d, seu antecessor e %d e seu sucessor e %d\n",
           n, n - 1, n + 1);
}

// Gostei desse exercicio porque envolve uma situacao mais pratica
void valor_ganho_podio() {
    int tempo, velocidade;
    float litros;

    printf("Digite o tempo e a velocidade: ");
    scanf("%d %d", &tempo, &velocidade);

    litros = (tempo * velocidade) / 12.0f;

    printf("%.3f\n", litros);
}

// Gostei desse exercicio porque precisei entender bem o operador %
void duracao_segundos_convertida() {
    int total_segundos, horas, minutos, segundos;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &total_segundos);

    horas = total_segundos / 3600;
    minutos = (total_segundos % 3600) / 60;
    segundos = total_segundos % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);
}

// Exercicio parecido com o anterior, bom para reforcar o que foi aprendido
void joaozinho() {
    int tempo, velocidade;
    float litros;

    printf("Digite o tempo e a velocidade: ");
    scanf("%d %d", &tempo, &velocidade);

    litros = (tempo * velocidade) / 12.0f;

    printf("%.3f\n", litros);
}

// Gostei desse porque comeca a trabalhar melhor com comparacoes
void maiordetres() {
    int a, b, c;

    printf("Digite o numero A: ");
    scanf("%d", &a);

    printf("Digite o numero B: ");
    scanf("%d", &b);

    printf("Digite o numero C: ");
    scanf("%d", &c);

    if (a > b && a > c) {
        printf("%d eh o maior\n", a);
    }

    if (b > a && b > c) {
        printf("%d eh o maior\n", b);
    }

    if (c > a && c > b) {
        printf("%d eh o maior\n", c);
    }
}

int main() {
    int selecao;

    // A ideia do menu ficou boa porque junta todos os exercicios em um programa
    printf(
        "Selecione a opcao desejada\n"
        "===========================\n"
        "1 - Idade\n"
        "2 - Conversao km/h para m/s\n"
        "3 - Cotacao dolar\n"
        "4 - Conversao graus para F\n"
        "5 - Conversao radiano\n"
        "6 - Antecessor e sucessor\n"
        "7 - Gasto de combustivel\n"
        "8 - Tempo de duracao em segundos\n"
        "9 - Joaozinho combustivel\n"
        "10 - Maior de tres\n"
    );

    scanf("%d", &selecao);

    switch (selecao) {
        case 1:
            idade();
            break;

        case 2:
            conversaokm();
            break;

        case 3:
            dolar();
            break;

        case 4:
            grausf();
            break;

        case 5:
            conversao_radiano();
            break;

        case 6:
            antecessor_sucessor();
            break;

        case 7:
            valor_ganho_podio();
            break;

        case 8:
            duracao_segundos_convertida();
            break;

        case 9:
            joaozinho();
            break;

        case 10:
            maiordetres();
            break;

        default:
            printf("Opcao invalida! Tente novamente.\n");
            break;
    }

    return 0;
}
