#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    crocchette, scatolette, tonno
} cibo_gatto;

typedef struct
{
    int codice;
    int eta;
    float peso;
    cibo_gatto cibo;
} gatto;

void caricamento (gatto gatti[], int l)
{
    int cib=3;
    for (int i=0; i<l; i++)
    {
        printf("Codice %d: ", i+1);
        scanf("%d", &gatti[i].codice);
        printf("eta' %d: ", i+1);
        scanf("%d", &gatti[i].eta);
        printf("peso %d: ", i+1);
        scanf("%f", &gatti[i].peso);
        while (cib != 0 && cib != 1 && cib != 2)
        {
            printf("cibo (0 - 1 - 2) %d: ", i+1);
            scanf("%d", &cib);
        }
        gatti[i].cibo = cib;
        cib = 3;
    }
}

void stampa (gatto gatti[], int l)
{
    for (int i=0; i<l; i++)
    {
        printf("%d ", gatti[i].codice);
        printf("%d ", gatti[i].eta);
        printf("%.1f ", gatti[i].peso);
        printf("%d ", (int)gatti[i].cibo);
        printf("\n");
    }
}

float media_peso (gatto gatti[], int l)
{
    int s;
    for (int i=0; i<l; i++)
    {
        s = s + gatti[i].peso;
    }
    return s/l;
}

int dieta (gatto gatti[], int l)
{
    int i=0;
    while (i<l)
    {
        if (gatti[i].eta < 4 && gatti[i].peso> media_peso(gatti,l))
            return i;
        else
            i++;
    }
}

int main()
{
    gatto gatti[4];
    int j;
    caricamento (&gatti, 4);
    stampa (gatti, 4);
    j=dieta (gatti, 4);

    printf("%d - %d", gatti[j].codice, (int)gatti[j].cibo);
    return 0;
}
