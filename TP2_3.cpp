#include<stdlib.h>
#include<ctype.h>
#include<stdio.h>
#include<time.h>

#define fil 15

int main(){

    srand(time(NULL));
    int c, f, cont, i;
    int col = 5 + rand() % (15 - 5);
    int mt [fil] [col];
    int vec[fil];

    // cargar matriz y vector
    for ( f = 0; f < fil; f++)
    {
        cont= 0;
        for ( c = 0; c < col; c++)
        {
            mt[f] [c] = 100 + rand() % (1000 - 100);
            if (mt [f] [c] % 2 == 0)
            {
                cont++;
            }
            
        }
        vec[f]= cont;    
    }
    // Mostrar Matriz
    for ( f = 0; f< fil; f++)
    {
        for ( c = 0; c < col; c++)
        {
            printf("| %d ",mt [f] [c]);
        }
        printf("|\n");
    }
    printf("\n");
    //mostrar vector
    for ( i = 0; i < fil; i++)
    {
        printf("|%d",vec[i]);
    }
    
     
    scanf(" %d");

    return 0;
}