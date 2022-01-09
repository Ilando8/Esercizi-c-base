#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, l, i, j, k;

    printf("inserire altezza: ");
    scanf("%d", &h);
    printf("inserire lunghezza: ");
    scanf("%d", &l);

    for (i=0; i<=h; i++)
    {
        for (j=0; j<=l; j++)
        {
            if (j!=0 && i!=0)
                if (i==h)
                    printf("*");
                else if (j==l)
                    printf("*");
                else
                    printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
