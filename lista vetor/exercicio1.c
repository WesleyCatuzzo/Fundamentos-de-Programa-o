#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int vetor[20];
    int i;

   for(i=0; i<20; i++)
   {
        vetor[i]=rand()%101;
   }
   for(i=0; i<20; i++)
   {

        if(vetor[i]%2==0)
        {
            printf("%d\n", vetor[i]);
        }
   }



    return 0;
}
