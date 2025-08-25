#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contador_de_caracteres(char letra){
    int numero = 0;
    char caractere;
    char filename[20] = "teste.txt";
    FILE *fp;
    fp = fopen(filename, "r");
    if(fp == NULL){
        return -404; // erro ao abrir arquivo
    }
    int i = 0;
    while(1){
        caractere = fgetc(fp);
        if(feof(fp))
            break;
        if(caractere==letra){
            numero++;
        }
        i++;
    }
    return numero;
}

int limite_de_caracteres(int numero){
    char texto[100];
    char caractere;
    char filename[20] = "teste.txt";
    int tam;
    FILE *f;
    f = fopen(filename, "r");
    if(f == NULL)
        return -404; // erro ao abrir arquivo
    int i = 0;
    while(fgets(texto, 100, f) != NULL){
        if(feof(f))
            break;
        caractere = fgetc(f);
        texto[i] = caractere;
        tam = strlen(texto);
        if(tam > 0 && texto[tam-1] == '\n')
            texto[tam-1] = '\0';
        printf("\nA string %d eh: %s\n", i, texto);
        i++;
    }
    fclose(f);
}

void substitui_espacos(){
    FILE *entrada, *saida;
    char ch;
    char filename[20] = "teste.txt";
    entrada = fopen(filename, "r");
    if (entrada == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return -404;
    }
    saida = fopen(filename, "w");
    if (saida == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return -404;
    }
    fclose(entrada);
    fclose(saida);
    return 0;

}