#include "../include/functions.h"

void test_contador_de_caracteres();
void test_limite_de_caracteres();
void test_substitui_espaco();

int total_de_testes = 0;
int total_de_erros = 0;

int main(int argc, char *argv[]){
    test_contador_de_caracteres();
    test_limite_de_caracteres();
    test_substitui_espaco();
    return 0;
}

void test_contador_de_caracteres(){
    if(contador_de_caracteres(a) == -404){
    total_de_erros++;
    }
}

void test_limite_de_caracteres(){
    return;
}

void test_substitui_espaco(){
    return;
}