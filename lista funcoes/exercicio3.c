#include <stdio.h>
#include <math.h>

int valor_absoluto(int num);

int main(void)
{
    int num, resultado1;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    resultado1= valor_absoluto(num);
    printf("Valor absoluto do numero é %d", resultado1);



}

int valor_absoluto(int num)
{
    int resultado;

    if(num<0)
    {
        resultado=abs(num);
    }
    else
        resultado=num;

    return resultado;

}



