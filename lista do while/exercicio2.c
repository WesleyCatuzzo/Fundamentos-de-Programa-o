#include <stdio.h>

int main(void)
{
    int  senha;

    do{

        printf("Informe a senha: ");
        scanf("%d", &senha);


        if(senha!=2019)
        {
            printf("Acesso Negado!\n");
        }
        else
            printf("Acesso Permitido!\n");




    }while(senha!=2019);



    return 0;
}
