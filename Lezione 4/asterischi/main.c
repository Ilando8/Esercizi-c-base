#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,ok=0,i=0;
    printf("inserire un numero: ");
    scanf("%d", &n);

    while (ok == 0)
    {
        if (i==n)
        {
            n = n-2;
            i=0;
            if ((n-2)<0)
                ok = 1;
            printf("\n");
        }
        else
        {
            printf("*");
            i++;
        }
    }
    if (n%2!=0)
        printf("*");
    return 0;
}
