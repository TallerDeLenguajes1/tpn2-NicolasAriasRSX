#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>

struct compu
{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
};typedef struct compu PC;

//PC CargarCompu(PC NPC);
//void MostrarPC(PC NPC);
void pCargarPC( PC *pNPC);
void pMostrarPC( PC * pNPC);

char tipos[6][10]={"Intel","AMD","Celeron","Athlon","Core","Pentium"};

int main(){


    srand(time(NULL));
    int n, i;


    printf("Ingrese la cantidad de maquinas que desea generar ");
    scanf("%d", &n);
    PC * pVecNPC= (PC *) malloc(sizeof(PC) * n);

    //pVecNPC = (PC *) malloc(n * sizeof(PC));
    PC pNueva;
    //PC Nueva;
    //MostrarPC(CargarCompu(Nueva));

    for ( i= 0; i < n; i++)
    {
        printf("\nPC numero %d\n", i+1);
        pCargarPC(& pNueva);
        pMostrarPC( & pNueva);
    };
    
    
    scanf(" %d");
    return 0;
}

// Funciones 
/*
PC CargarCompu( PC NPC)
{
    NPC.anio= 2000 + rand() % (2018 - 2000);
    NPC.velocidad= 1 + rand() % (4 - 1);
    NPC.cantidad= 1 + rand() % (5 - 1);
    NPC.tipo_cpu= tipos[rand() % (6)];
    printf("\n");

    return NPC ;
}

void MostrarPC(PC NPC)
{
    printf("Anio: %d\n",NPC.anio);
    printf("Velocidad: %d GHz\n",NPC.velocidad);
    printf("Cantidad de procesadores: %d\n",NPC.cantidad);
    printf("Tipo: ");puts(NPC.tipo_cpu);printf("\n");
}
*/
void pCargarPC( PC *pNPC)
{
    pNPC->anio= 2000 + rand() % (2018 - 2000);
    pNPC->velocidad= 1 + rand() % (4 - 1);
    pNPC->cantidad= 1 + rand() % (5 - 1);
    pNPC->tipo_cpu= tipos[rand() % (6)];
}

void pMostrarPC( PC * pNPC)
{
    printf("\nAnio: %d\n", pNPC->anio);
    printf("Velocidad: %d GHz\n", pNPC->velocidad);
    printf("Cantidad de nucleos: %d\n", pNPC->cantidad);
    printf("Tipo de CPU: ");puts(pNPC->tipo_cpu);
}

