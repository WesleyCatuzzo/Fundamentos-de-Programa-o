#include <stdio.h>

int main(void)
{
    float nota;

    do{
    printf("Insira a nota: ");
    scanf("%f", &nota);

    if(nota<0 || nota>10)
    {
        printf("Nota invalida!\n");
    }
    else
        printf("Nota valida!\n");

    }while(nota<0 || nota>10);




    return 0;
}
