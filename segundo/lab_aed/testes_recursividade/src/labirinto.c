/* Inclusão de Blibiotecas */
#include <stdio.h>
#include <locale.h>
//#include "../libs/funcoes.h"

int mov(int n, int labirinto[][n], int posX, int posY){
    labirinto[posX][posY] = 2;
    if(labirinto[posX][posY+1]==0){
        printf("mova para a direita\n");
        return mov(n, labirinto, posX, posY+1);
    }
    if(labirinto[posX+1][posY]==0){
        printf("mova para baixo\n");
        return mov(n, labirinto, posX+1, posY);
    }
    if(labirinto[posX][posY-1] == 0){
        printf("mova para a esquerda\n");
        return mov(n, labirinto, posX, posY-1);
    }
    if(labirinto[posX-1][posY]==0){
        printf("mova para cima\n");
        return mov(n, labirinto, posX-1, posY);
    }
}

void mostrar_resultado(int n, int labirinto[][n]){
    printf("========Resolução========\n");
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            printf("%d", labirinto[i][j]);
        }
        printf("\n");
    }
}

/* Função Principal */
int main(int argc, char argv[]){
    setlocale(LC_ALL, "Portuguese");
    int labirinto[4][4] = {{0,0,0,1},
                           {1,0,0,1},
                           {1,0,1,1},
                           {1,0,0,0}};
    int labirinto2[10][10] = {
    {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 1, 1, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 1, 1, 1, 1, 1, 0, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 0, 1, 1, 1, 1, 1, 1, 0},
    {0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 1, 1, 1, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 1, 1, 1, 0}
    };

    mov(10, labirinto2, 0, 0);
    mostrar_resultado(10, labirinto2);

    return 0;
}
