#include <stdio.h>
#include "../include/operacoes.h"

int main() {
    int x, y;
    char op;
    printf("Digite um inteiro, um operador, e outro inteiro: ");
    scanf("%d %c %d", &x, &op, &y);

    switch (op)
    {
    case '+':
        printf("O resultado e: %d", soma(x, y));
        break;
    case '-':
        printf("O resultado e: %d", subtracao(x, y));
        break;
    case '*':
        printf("O resultado e: %d", divisao(x, y));
        break;
    case '/':
        printf("O resultado e: %d", multiplicacao(x, y));
        break;
    case '^':
        int resultado = exponenciacao(x, y);
        if(resultado == -1)
            printf("Atualmente nao resolvemos expoentes negativos!\n");
        else
            printf("O resultado e: %d", exponenciacao(x, y));
        break;
    
    default:
        printf("O operador digitado é inválido!");
        break;
    }
}