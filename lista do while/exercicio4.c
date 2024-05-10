#include <stdio.h>

int main(void)
{
    int codigo, quantidade;

    printf("Especificacao-Codigo-Preco\nCachorro Quente - 100 - R$ 1,20\nBauru Simples - 101 - R$ 1,30\nBauru com ovo - 102 - R$ 1,50\nHambúrguer - 103 - R$ 1,20\nCheeseburguer - 104 - R$ 1,30\nRefrigerante - 105 - R$ 1,00");
    do{

    if(codigo<0)
    {
        printf("\nInsira o codigo do produto: ");
        scanf("%d", &codigo);
        printf("Insira a quantidade: ");
        scanf("%d", &quantidade);
    }

    }while(codigo<0);








    return 0;
}
