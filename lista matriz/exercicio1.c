#include <stdio.h>
#include <stdlib.h>
#include <time.h>>

int main(void)
{
    srand(time(NULL));
    int l=4, c=5, i , j;
    int matriz[l][c];

    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
        {
            matriz[i][j]= rand() % 50+1;
        }
    }

    printf("MATRIZ:\n");
    for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }



    return 0;
}
