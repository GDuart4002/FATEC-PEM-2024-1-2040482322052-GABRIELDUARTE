#include <stdio.h>
#include <stdlib.h>

#define MAX_FUNCAO 20

// Funções para as operações
float soma(float num1, float num2) {
    return num1 + num2;
}

float subtracao(float num1, float num2) {
    return num1 - num2;
}

float multiplicacao(float num1, float num2) {
    return num1 * num2;
}

float divisao(float num1, float num2) {
    if (num2 == 0) {
        printf("Impossível fazer divisão por zero.\n");
        return 0;
    }
    return num1 / num2;
}

// Função para a calculadora
float calculadora() {
    char funcao[MAX_FUNCAO];
    float num1, num2, result;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Escolha entre as funções básicas (+, -, *, /): ");
    scanf("%s", funcao);

    switch(funcao[0]) {
        case '+':
            result = soma(num1, num2);
            break;
        case '-':
            result = subtracao(num1, num2);
            break;
        case '*':
            result = multiplicacao(num1, num2);
            break;
        case '/':
            result = divisao(num1, num2);
            break;
        default:
            printf("ERRO: Função inválida.\n");
            result = 0;
    }

    return result;
}

int main() {
    float resultado;

    while(1) {
        resultado = calculadora();
        printf("Resultado: %.2f\n", resultado);
        printf("Coloque 's' para sair ou qualquer outra tecla para continuar\n");
        char opcao;
        scanf(" %c", &opcao);
        if(opcao == 's' || opcao == 'S'){
            break;
        }
    }

    return 0;
}
