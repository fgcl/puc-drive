#include <stdio.h>
#include "../include/triangulo.h"

int total_testes = 0;
int total_falhas = 0;

void test_triangulo();

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
    test_triangulo();
    printf("\nResumo: %d testes, %d falhas\n", total_testes, total_falhas);
    return total_falhas == 0 ? 0 : 1;
}


void test_triangulo() {
    Ponto v[3];
    v[0].coordx = 1.0;
    v[0].coordy = 1.0;
    v[1].coordx = 2.0;
    v[1].coordy = 2.0;
    v[2].coordx = 1.0;
    v[2].coordy = 2.0;
    printf("Testando triangulo...\n");
    ASSERT_EQ(2, verificarTipoTriangulo(&v[]));
}
