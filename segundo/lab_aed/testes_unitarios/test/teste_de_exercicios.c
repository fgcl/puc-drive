#include <stdio.h>
#include "../include/exercicios.h"

int total_testes = 0;
int total_falhas = 0;

void test_ordenar();
void test_impar();
void test_potencia();
void test_calculo_imc();
void test_permissao_dirigir();
void test_fatorial();

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
    test_ordenar();
    test_impar();
    test_potencia();
    test_calculo_imc();
    test_permissao_dirigir();
    test_fatorial();
    printf("\nResumo: %d testes, %d falhas\n", total_testes, total_falhas);
    return total_falhas == 0 ? 0 : 1;
}

void test_ordenar() {
    printf("Testando ordenação...\n");
    ASSERT_EQ(5, ordenar(5, 2));
    ASSERT_EQ(8, ordenar(-1, 8));
    ASSERT_EQ(1, ordenar(-1, 1));
}

void test_impar() {
    printf("Testando impar...\n");
    ASSERT_EQ(1, impar(5));
    ASSERT_EQ(1, impar(6));
    ASSERT_EQ(1, impar(3));
}

void test_potencia() {
    printf("Testando potencia...\n");
    ASSERT_EQ(4, potencia(2, 2));
    ASSERT_EQ(8, potencia(2, 3));
    ASSERT_EQ(3, potencia(3, 1));
}

void test_calculo_imc() {
    printf("Testando calculo_imc...\n");
    ASSERT_EQ(12, calculo_imc(178, 400000));
    ASSERT_EQ(24, calculo_imc(180, 800000));
    ASSERT_EQ(15, calculo_imc(200, 600000));
}

void test_permissao_dirigir(){
    printf("Testando permissao_dirigir...\n");
    ASSERT_EQ(1, permissao_dirigir(18, 6));
    ASSERT_EQ(0, permissao_dirigir(17, 9));
    ASSERT_EQ(0, permissao_dirigir(42, 5));
}

void test_fatorial(){
    printf("Testando fatorial...\n");
    ASSERT_EQ(120, fatorial(5));
    ASSERT_EQ(2, fatorial(2));
    ASSERT_EQ(6, fatorial(3));
}
