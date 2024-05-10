#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int i, j, fat=1, n;
    int vetorA[10], matriz_b[10][3];

    for(i=0; i<10; i++)
    {
        vetorA[i]= rand()% 10+1;
    }

    printf("Vetor A:\n");
    for(i=0; i<10; i++)
    {
        printf("%d\t", vetorA[i]);
    }

    printf("Matriz B:\n");
    for(i=0; i<10; i++)
    {
        matriz_b[i][0]= vetorA[i]+5;
    }
    for(i=0; i<10; i++)
    {
        printf("%d\t", matriz_b[i][j]);
    }


    for(i=0; i<10; i++)
    {
        matriz_b[i][1]= vetorA[i]*fat;
    }
    for(j=0; j<10; i++)
    {
        for(i=1; i<=vetorA[j]; i++)
        {
            fat=fat*i;
        }
        matriz_b[j][1]=fat;
        fat=1;
    }
    printf("%d\t", matriz_b[i][j]);








    return 0;
}
