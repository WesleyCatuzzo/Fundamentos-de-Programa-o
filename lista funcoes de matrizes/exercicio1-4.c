#include <stdio.h>
#include <time.h>

float valor_medio(int vetor[], int tam);
int maior_valor(int vetor[], int maior);
int menor_valor(int vetor[], int menor);

int main(void)
{
    srand(time(NULL));
    int tam;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tam);
    int vetor[tam], i, menor1, maior1;
    float media1;


    for(i=0; i<tam; i++)
    {
        vetor[i]= rand()% 30+1;

    }

    for(i=0; i<tam; i++)
    {
        printf("%d\t", vetor[i]);
    }

    media1= valor_medio(vetor, tam);
    printf("\nA media dos valores e %.2f", media1);

    maior1= maior_valor(vetor, tam);
    printf("\nO maior valor e %d", maior1);

    menor1= menor_valor(vetor, tam);
    printf("\nO menor valor e %d", menor1);





    return 0;
}

float valor_medio(int vetor[], int pepa)
{
   int i, soma=0;
   float  media=0;

   for(i=0; i<pepa; i++)
   {
       soma=soma+vetor[i];
   }
   media= soma/(float) pepa;
   return media;
}
int maior_valor(int vetor[], int tamanho)
{
    int i, maior=0;

    for(i=0; i<tamanho; i++)
    {
        if(vetor[i]>maior)
        {
            maior=vetor[i];
        }

    }
    return maior;

}
int menor_valor(int vetor[], int tamanho)
{
    int i, menor=100;

    for(i=0; i<tamanho; i++)
    {
        if(vetor[i]<menor)
        {
            menor=vetor[i];
        }

    }
    return menor;
}
