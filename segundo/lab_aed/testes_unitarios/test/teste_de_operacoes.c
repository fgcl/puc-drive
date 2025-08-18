#include <stdio.h>
#include "../include/operacoes.h"

int total_testes = 0;
int total_falhas = 0;

void test_soma();
void test_subtracao();
void test_multiplicacao();
void test_divisao();
void test_exponenciacao();

#define ASSERT_EQ(expected, result) do { \
    total_testes++; \
    if ((expected) != (result)) { \
        printf("FALHOU: Esperado %d, obteve %d\n", expected, result); \
        total_falhas++; \
    } else { \
        printf("OK: Esperado %d, obteve %d\n", expected, result); \
    } \
} while (0)


int main() {
    test_soma();
    test_subtracao();
    test_multiplicacao();
    test_divisao();
    test_exponenciacao();

    printf("\nResumo: %d testes, %d falhas\n", total_testes, total_falhas);
    return total_falhas == 0 ? 0 : 1;
}


void test_soma() {
    printf("Testando soma...\n");
    ASSERT_EQ(4, soma(2, 2));
    ASSERT_EQ(0, soma(-1, 1));
    ASSERT_EQ(-2, soma(-1, -1));
}

void test_subtracao() {
    printf("Testando subtracao...\n");
    ASSERT_EQ(0, subtracao(2, 2));
    ASSERT_EQ(-2, subtracao(-1, 1));
    ASSERT_EQ(0, subtracao(-1, -1));
}

void test_multiplicacao() {
    printf("Testando multiplicacao...\n");
    ASSERT_EQ(4, multiplicacao(2, 2));
    ASSERT_EQ(-1, multiplicacao(-1, 1));
    ASSERT_EQ(1, multiplicacao(-1, -1));
}

void test_divisao() {
    printf("Testando divisao...\n");
    ASSERT_EQ(1, divisao(2, 2));
    ASSERT_EQ(-1, divisao(-1, 1));
    ASSERT_EQ(1, divisao(-1, -1));
}

void test_exponenciacao() {
    printf("Testando exponenciacao...\n");
    ASSERT_EQ(2, exponenciacao(2, 1));
    ASSERT_EQ(8, exponenciacao(2, 3));
    ASSERT_EQ(1, exponenciacao(2, 0));
    ASSERT_EQ(0, exponenciacao(0, 2));
    if(exponenciacao(3, -1) != -1){ \
        printf("FALHOU: Esperado retorno -1 (invalido) para expoente negativo\n"); \
        total_falhas++; \
    }else {
        printf("OK: Esperado -1 para retorno com expoente negativo, obteve -1 \n"); \
    }
}