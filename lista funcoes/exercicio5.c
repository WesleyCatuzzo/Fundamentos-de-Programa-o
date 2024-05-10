#include <stdio.h>
#include <math.h>


int exponencial(int base, int expoente);

int main(void)
{
    int base, expoente, resultado1;

    printf("Informe a base: ");
    scanf("%d", &base);
    printf("Informe o expoente: ");
    scanf("%d", &expoente);

    resultado1= exponencial(base, expoente);
    printf("O exponencial e %d", resultado1);


}

int exponencial(int base, int expoente)
{
    int resultado;
    resultado= pow(base, expoente);
    return resultado;

}
