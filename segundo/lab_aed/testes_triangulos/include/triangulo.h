#include <stdio.h>
#include <math.h>

typedef struct
{
    float coordx;
    float coordy;

} Ponto;

void registraPonto(Ponto *p);
int verificaTipoTriangulo(Ponto *p);

void registraPonto(Ponto *p)
{
    printf("Digite a coordenada x \n");
    scanf("%f", &p->coordx);
    printf("Digite a coordenada y \n");
    scanf("%f", &p->coordy);
}

int verificaTipoTriangulo(Ponto *p)
{
    float ladol = 0,
          ladoc = 0,
          hipo = 0;
    ladol = (v[2].coordx-v[0].coordx);
    ladoc = (v[2].coordy-v[1].coordy);
    hipo = sqrt((v[1].coordx-v[0].coordx).(v[1].coordx-v[0].coordx)+(v[1].coordy-v[0].coordy).(v[1].coordy-v[0].coordy));
    if(ladoc==ladol)  //equilatero ou isoceles
    {
        if(hipo==ladol)
        {
            return 1; //equilatero
        }
        return 2;//isosceles
    }
    return 3; //se for escaleno
}
