#include <stdio.h>

int fatorial(int num);

int main(void)
{
    int num, resultado1;
    printf("Informe um numero: ");
    scanf("%d", &num);

    resultado1= fatorial(num);
    printf("O fatorial do numero é %d", resultado1);

}

int fatorial(int num)
{
    int i, fat=1;

    for(i=1; i<=num; i++)
    {
        fat = fat*i;
    }
    return fat;


}
