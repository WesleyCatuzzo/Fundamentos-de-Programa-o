#include <stdio.h>
#include <math.h>

float volume_da_esfera_(float raio);


int main(void)
{
    float raio,  volume;
    printf("Insira o raio da esfera: ");
    scanf("%f", &raio);

    volume=volume_da_esfera_(raio);
    printf("Volume da esfera %.2f", volume);

}

float volume_da_esfera_(float raio)
{
    float volume;
    float pi=3.14159;
    volume = 1.33333333 * pi * pow(raio,3);
    return volume;

}
