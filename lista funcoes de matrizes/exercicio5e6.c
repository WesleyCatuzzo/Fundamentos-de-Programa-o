#include <stdio.h>

void transforma_stringM(char string[], int num);

int main(void)
{
    int i, num;
    char string[50];
    printf("Informe uma frase: ");
    scanf("%[^\n]s", string);
    printf("Informe 1 ou 0 para transformar: ");
    scanf("%d", &num);


    transforma_stringM(string, num);




    return 0;
}

void transforma_stringM(char string[], int num)
{
    int i=0;
    if(num==1)
    {
        while(string[i]!='\0')
        {
            if(string[i]>=97 && string[i]<=122)
            {
                string[i]= string[i]-32;
            }
            i++;
        }
    }
    else if(num==0)
    {
        while(string[i]!='\0')
        {
            if(string[i]>=65 && string[i]<=90)
            {
                string[i]= string[i]+32;
            }
            i++;
        }
    }
    printf("%s", string);



}
