#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int i, j;
    int vetorA[7], vetorB[7], matriz_c[7][2];

    for(i=0; i<7; i++)
    {
        vetorA[i]= rand()% 60+1;
        vetorB[i]= rand()% 50+1;
    }

    printf("Vetor A:\n");
    for(i=0; i<7; i++)
    {
        printf("%d\t", vetorA[i]);
    }

    printf("\nVetor B:\n");
    for(i=0; i<7; i++)
    {
        printf("%d\t", vetorB[i]);
    }

    printf("\nMatriz C:\n");
    for(i=0; i<7; i++)
    {
        matriz_c[i][0]= vetorA[i];
    }
    for(i=0; i<7; i++)
    {
        matriz_c[i][1]= vetorB[i];
    }

    for(i=0; i<7; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d\t", matriz_c[i][j]);
        }
        printf("\n");
    }



    return 0;
}
