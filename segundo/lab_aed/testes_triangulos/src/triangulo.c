#include <stdio.h>
#include "../include/triangulo.h"

int main()
{
    Ponto v[3];
    for(int i = 0; i<3; i++)
    {
        registraPonto(&v[i]);
        printf("%f\n", v[i].coordx);
    }
    switch(verificarTipoTriangulo(&v[0]))
    {
        case 1:
            printf("equilatero");
            break;
        case 2:
            printf("isosceles");
            break;
        case 3:
            printf("escaleno")
            break;
    }
    return 0;
}
