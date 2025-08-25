#include <stdio.h>
#include <locale.h>
#include "../include/functions.h"

int main(int argc, char *argv[]){
    int opcao, tamanho, contagem;
    char letra;
    setlocale(LC_ALL, "Portuguese");
    printf("O que você quer fazer?");
    printf("1. O numero de caracteres x que aparece no arquivo.");
    printf("2. Strings maiores que...");
    printf("3. Substituidor de espaços");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
            printf("Digite a letra que voce quer contar");
            scanf("%c", &letra);
            contagem = contador_de_caracteres(letra);
            if(contagem == -404)
                printf("Erro na leitura do arquivo");
            else
                printf("Possui %d ocorrencias do caractere %c", contagem, letra);
            break;
        case 2:
            printf("Qual o tamanho maximo da string que você quer pesquisar?");
            scanf("%d", &tamanho);
            limite_de_caracteres(tamanho);
            break;
        case 3:
            break;
    }
    return 0;
}