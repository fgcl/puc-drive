#include <stdlib.h>

int soma(int x, int y);

int subtracao(int x, int y);

int multiplicacao(int x, int y);

int divisao(int x, int y);

int exponenciacao(int x, int y);

int soma(int x, int y){
    return x+y;
}

int subtracao(int x, int y){
    return x-y;
}

int divisao(int x, int y){
    return x/y;
}

int multiplicacao(int x, int y){
    return x*y; // trecho do codigo errado
}

int exponenciacao(int x, int y){
    int resultado = 1;

    for(int i = 0; i < y; i++)
        resultado = resultado*x;
     if (y < 0) {
        return y;
    }
    return resultado;
}
