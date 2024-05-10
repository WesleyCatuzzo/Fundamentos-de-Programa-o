#include <stdio.h>

int main(void)
{
    int vetor[5];
    int i;


    for(i=0; i<5; i++)
    {
        printf("Informe o numero na posicao %d: ", i+1);
        scanf("%d", &vetor[i]);

    }


    for(i=4; i>=0; i--)
    {
        printf("\nA ordem inversa do vetor eh: %d", vetor[i]);

    }



    return 0;
}
