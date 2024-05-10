#include <stdio.h>

int main(void)
{
    int vetor[10];
    int i;
    int soma=0, maior, menor;
    float media;

    for(i=0; i<10; i++)
    {
        printf("Informe a nota %d: ", i+1);
        scanf("%d", &vetor[i]);

        soma = soma+vetor[i];
    }

    media= (float)soma/10;


    maior = vetor[0];
    for(i=1; i<10; i++)
    {
        if(vetor[i]> maior)
        {
            maior=vetor[i];
        }
    }

    menor = vetor[0];
    for(i=1; i<10; i++)
    {
        if(vetor[i]< menor)
        {
            menor=vetor[i];
        }
    }



    printf("\nA maior nota eh %d\n", maior);
    printf("A menor nota eh %d\n", menor);
    printf("A media das notas eh %.2f", media);



    return 0;
}
