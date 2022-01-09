#include <stdio.h>
#include <stdlib.h>

float potenza(float base,int esponente)
{
    float x=1;
    if (esponente==0)
        return 1;
    else if (esponente==1)
        return base;
    else
        x=base*potenza(base,esponente-1);

    return x;
}

float sum_pow(float b, int e) {
    float s=0;
    for (int i=0;i<=e;i++) {
        s = s + potenza(b,e-i);
    }
    return s;
}

int main()
{
    int e;
    float b,s;

    printf("inserire base: ");
    scanf("%f",&b);
    printf("inserire esponente: ");
    scanf("%d",&e);
    while (e<0)
    {
        printf("inserire un numero maggiore di 0: ");
        scanf("%d", &e);
    }

    s=sum_pow(b,e);
    printf("%.2f \n", s);

    return 0;
}
