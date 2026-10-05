#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Funcao que recebe dois valores e mostra eles na ordem inversa
void inverso() {
    int a, b;

    // Solicita o primeiro valor
    printf("\nDigite um valor: ");
    scanf("%d", &a);

    // Solicita o segundo valor
    printf("Digite outro valor: ");
    scanf("%d", &b);

    // Mostra primeiro o segundo valor e depois o primeiro
    printf("Segundo valor primeiro: %d\n", b);
    printf("Primeiro valor depois: %d\n", a);
}

// Funcao que transforma um numero em notacao cientifica
void notacao() {
    double valor, a;
    int n = 0;

    // Solicita um numero positivo
    printf("\nDigite um valor positivo: ");
    scanf("%lf", &valor);

    // Verifica se o numero digitado e positivo
    if (valor > 0) {
        a = valor;

        // Enquanto o numero for maior ou igual a 10,
        // divide por 10 e aumenta o expoente
        while (a >= 10.0) {
            a = a / 10.0;
            n++;
        }

        // Enquanto o numero for menor que 1,
        // multiplica por 10 e diminui o expoente
        while (a < 1.0) {
            a = a * 10.0;
            n--;
        }

        // Mostra o numero na forma de notacao cientifica
        printf("%.4lf x 10^%d\n", a, n);

    } else {
        // Caso o usuario digite zero ou um numero negativo
        printf("Erro: insira apenas valores positivos.\n");
    }
}

// Funcao que transforma um numero decimal em binario
void binario() {
    int n;
    int resultado;

    // Variaveis que armazenam cada bit encontrado
    int bit64, bit32, bit16, bit8, bit4, bit2;

    // Solicita o numero que sera convertido
    printf("\nDigite um valor N para transformar em binario: ");
    scanf("%d", &n);

    // O resto da divisao por 2 determina o bit atual
    // Depois dividimos o numero por 2 para continuar o processo
    bit64 = n % 2;
    resultado = n / 2;

    bit32 = resultado % 2;
    resultado = resultado / 2;

    bit16 = resultado % 2;
    resultado = resultado / 2;

    bit8 = resultado % 2;
    resultado = resultado / 2;

    bit4 = resultado % 2;
    resultado = resultado / 2;

    bit2 = resultado % 2;
    resultado = resultado / 2;

    // Mostra os bits encontrados na ordem correta
    printf("O valor de %d em binario e %d%d%d%d%d%d%d\n",
           n, resultado, bit2, bit4, bit8, bit16, bit32, bit64);
}

// Funcao que calcula o salario final com comissao
void salario_comissao() {
    float salario_fixo, total_vendas, total_receber;

    // Solicita o salario fixo
    printf("\nDigite o salario fixo: ");
    scanf("%f", &salario_fixo);

    // Solicita o total de vendas realizado
    printf("Digite o total de vendas: ");
    scanf("%f", &total_vendas);

    // Calcula o salario final
    // A comissao corresponde a 15% das vendas
    total_receber = salario_fixo + (total_vendas * 0.15);

    // Mostra o salario total
    printf("Total a receber: %.2f\n", total_receber);
}

// Funcao que calcula a soma, media e produto de quatro valores
void media4v() {
    int v1, v2, v3, v4;
    int soma, produto;
    float media;

    // Leitura dos quatro valores
    printf("\nDigite o 1o valor: ");
    scanf("%d", &v1);

    printf("Digite o 2o valor: ");
    scanf("%d", &v2);

    printf("Digite o 3o valor: ");
    scanf("%d", &v3);

    printf("Digite o 4o valor: ");
    scanf("%d", &v4);

    // Soma os quatro valores
    soma = v1 + v2 + v3 + v4;

    // Divide a soma por 4 para calcular a media
    // O 4.0 faz com que o resultado seja decimal
    media = soma / 4.0;

    // Multiplica os quatro valores
    produto = v1 * v2 * v3 * v4;

    // Mostra os resultados
    printf("\n--- RESULTADOS ---\n");
    printf("Soma: %d\n", soma);
    printf("Media: %.2f\n", media);
    printf("Produtorio: %d\n", produto);
}

// Funcao que transforma uma idade em dias para anos, meses e dias
void idade() {
    int idade_dias, anos, meses, dias;

    // Solicita a idade em quantidade de dias
    printf("\nDigite sua idade em dias: ");
    scanf("%d", &idade_dias);

    // Divide os dias por 365 para descobrir os anos completos
    anos = idade_dias / 365;

    // O operador % pega o resto da divisao
    // Aqui ficam apenas os dias que sobraram depois dos anos
    idade_dias = idade_dias % 365;

    // Divide os dias restantes por 30 para descobrir os meses
    meses = idade_dias / 30;

    // Pega o restante dos dias depois dos meses
    dias = idade_dias % 30;

    // Mostra o resultado separado
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
}

// Funcao que calcula o volume de uma esfera
void esfera() {
    float R, volume;

    // Solicita o raio da esfera
    printf("\nDigite o raio da esfera: ");
    scanf("%f", &R);

    // Formula do volume da esfera:
    // V = (4/3) * PI * R^3
    volume = (4.0 / 3.0) * 3.14159 * R * R * R;

    // Mostra o volume com tres casas decimais
    printf("VOLUME = %.3f\n", volume);
}

// Funcao que calcula a distancia entre dois pontos
void cartesiano() {
    int x1, x2, y1, y2;
    float dist;

    // Le as coordenadas do primeiro ponto
    printf("\nDigite o P1 x1: ");
    scanf("%d", &x1);

    printf("Digite o P1 y1: ");
    scanf("%d", &y1);

    // Le as coordenadas do segundo ponto
    printf("Digite o P2 x2: ");
    scanf("%d", &x2);

    printf("Digite o P2 y2: ");
    scanf("%d", &y2);

    // Calcula a distancia entre os dois pontos
    // Utiliza o Teorema de Pitagoras
    dist = sqrt(
        (x2 - x1) * (x2 - x1) +
        (y2 - y1) * (y2 - y1)
    );

    // Mostra a distancia calculada
    printf("Distancia: %.2f\n", dist);
}

int main() {
    int selecao;

    // O do-while faz com que o menu seja mostrado
    // pelo menos uma vez e continue aparecendo
    // enquanto o usuario nao escolher 0
    do {

        // Exibe o menu principal
        printf("\n");
        printf("===============================\n");
        printf("          MENU\n");
        printf("===============================\n");
        printf("1 - Inversao de valores\n");
        printf("2 - Notacao cientifica\n");
        printf("3 - Base binaria\n");
        printf("4 - Salario fixo e comissao\n");
        printf("5 - Media de 4 valores\n");
        printf("6 - Idade em dias\n");
        printf("7 - Volume da esfera\n");
        printf("8 - Plano cartesiano\n");
        printf("0 - Sair\n");
        printf("===============================\n");

        // Recebe a opcao escolhida pelo usuario
        printf("Selecione a opcao desejada: ");
        scanf("%d", &selecao);

        // Verifica qual opcao foi escolhida
        switch (selecao) {

            // Opcao 1 chama a funcao inverso
            case 1:
                inverso();
                break;

            // Opcao 2 chama a funcao notacao
            case 2:
                notacao();
                break;

            // Opcao 3 chama a funcao binario
            case 3:
                binario();
                break;

            // Opcao 4 chama a funcao salario_comissao
            case 4:
                salario_comissao();
                break;

            // Opcao 5 chama a funcao media4v
            case 5:
                media4v();
                break;

            // Opcao 6 chama a funcao idade
            case 6:
                idade();
                break;

            // Opcao 7 chama a funcao esfera
            case 7:
                esfera();
                break;

            // Opcao 8 chama a funcao cartesiano
            case 8:
                cartesiano();
                break;

            // Opcao 0 encerra o programa
            case 0:
                printf("\nPrograma encerrado.\n");
                break;

            // Caso seja digitada uma opcao que nao existe
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }

    // O menu continua enquanto selecao for diferente de 0
    } while (selecao != 0);

    // Indica que o programa terminou corretamente
    return 0;
}
