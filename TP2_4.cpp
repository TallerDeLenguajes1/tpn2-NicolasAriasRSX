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
void ListaPC ( PC * pNPC, int n);
void MostrarLista( PC * pLPC, int n);
void pMostrarPC( PC * pNPC);
void PcMasVieja(PC * pPCMV, int n);
void PcMasVeloz( PC * pPCV, int n);

char tipos[6][10]={"Intel","AMD","Celeron","Athlon","Core","Pentium"};
//_____________________________________________________________________________________
int main(){


    srand(time(NULL));
    int n, i;


    printf("Ingrese la cantidad de maquinas que desea generar ");
    scanf("%d", &n);
    PC * pVecNPC= (PC *) malloc(sizeof(PC) * n);

    ListaPC(pVecNPC, n);
    MostrarLista(&pVecNPC[0], n);
    PcMasVieja(pVecNPC, n);
    PcMasVeloz(pVecNPC, n);
    //PC pNueva;
    //PC Nueva;
    //MostrarPC(CargarCompu(Nueva));
    //printf("\nPC numero %d\n", i+1);
    //  pMostrarPC( & pNueva);
     
    scanf(" %d");
    return 0;
}

// Funciones _________________________________________________________________________________________

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

void ListaPC ( PC * pNPC, int n)
{
    for(int i= 0; i <n; i++)
    {
        pCargarPC(pNPC + i);
    }
}

void MostrarLista( PC * pLPC, int n)
{
    for(int i= 0; i <n; i++)
    {
        printf("Computadora Nnumero %d\n\n", i+1);
        printf("Anio: %d\n",(pLPC+i)->anio);
        printf("Velocidad : %d GHz\n", (pLPC+i)->velocidad);
        printf("Cantidad de CPU: %d\n", (pLPC +i)->cantidad);
        printf("Tipo de procesador: %s\n",pLPC[i].tipo_cpu);
        printf("==========**==========");
    }
}

void PcMasVieja(PC * pPCMV, int n)
{
    int aux= 0;
    int anio= pPCMV->anio;

    for(int i= 0; i< n; i++)
    {
        if (anio> (pPCMV+i)->anio)
        {
            anio= (pPCMV+i)->anio;
            aux= i;
        }        
    }
    printf("\n{{{{{{{{ PC mas vieja }}}}}}}}");
    printf("Anio: %d\n",(pPCMV+aux)->anio);
    printf("Velocidad : %d GHz\n", (pPCMV+aux)->velocidad);
    printf("Cantidad de CPU: %d\n", (pPCMV +aux)->cantidad);
    printf("Tipo de procesador: %s\n",pPCMV[aux].tipo_cpu);
    printf("___________________________");
}

void PcMasVeloz( PC * pPCV, int n)
{
    int Vel= pPCV->velocidad;
    int aux= 0;

    for( int i= 0; i< n; i++)
    {
        if (aux<(pPCV+ i)->velocidad)
        {
            aux= (pPCV+ i)->velocidad;
            aux= 0;
        }
    }
        printf("\n{{{{{{{{ PC mas Rapida }}}}}}}}");
        printf("Anio: %d\n",(pPCV+aux)->anio);
        printf("Velocidad : %d GHz\n", (pPCV+aux)->velocidad);
        printf("Cantidad de CPU: %d\n", (pPCV +aux)->cantidad);
        printf("Tipo de procesador: %s\n",pPCV[aux].tipo_cpu);
        printf("___________________________");    
}