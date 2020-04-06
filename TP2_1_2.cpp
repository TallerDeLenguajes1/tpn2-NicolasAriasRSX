#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 4
#define M 5

int main(){

    int c, f, i;
    int mt [N][M];
    int *pMt;
    srand(time(NULL));

    pMt= &mt[0][0];

    for (f = 0; f < N; f++)
    {
        for (c = 0; c < M; c++)
        {
            mt [f] [c]= 10 + rand() % (100-10);
        }    
    }

    for (f = 0; f < N; f++)
    {
        for (c = 0; c < M; c++)
        {
            printf("| %d ", *pMt++);
        }
        printf("|\n");
    }
    
    scanf(" %d");

    return 0;
}