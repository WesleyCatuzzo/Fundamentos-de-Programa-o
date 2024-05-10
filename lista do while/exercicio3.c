#include <stdio.h>

int main(void)
{
    int codigo, altura, peso, maiorA=0, maiorP=0, menorA=0, menorP=0;

    do{
        printf("Informe o codigo do cliente: ");
        scanf("%d", &codigo);
        if(codigo!=0)
        {
        printf("Informe a altura do cliente: ");
        scanf("%d", &altura);
        printf("Informe o peso do cliente: ");
        scanf("%d", &peso);
        }

    }while(codigo!=0);

    if(altura>maiorA)
    {
        maiorA=altura;
    }
    else
        menorA=altura;
    if(peso>maiorP)
    {
        maiorP=peso;
    }
    else
        menorP=peso;


    printf("\nCliente mais alto: %d\n", maiorA);
    printf("\nCliente mais baixo: %d\n", menorA);
    printf("\nCliente mais gordo: %d\n", maiorP);
    printf("\nCliente mais magro: %d\n", menorP);





    return 0;
}
