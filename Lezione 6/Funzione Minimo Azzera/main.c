#include <stdio.h>
#include <stdlib.h>

int min_azzera (int a[], int l)
{
    int m=a[0], i=0;
    while (i<l)
    {
        if (a[i]<m)
            m = a[i];
        else
            i++;
        if (i%2!=0)
            a[i] = 0;
    }
    return m;
}

void stampa (int a[], int l)
{
    for (int i=0; i<l; i++)
        printf("%d \n", a[i]);
}

int main()
{
    int a[10], m;

    for (int i=0; i<10; i++)
    {
        printf ("Elemento %d:", i+1);
        scanf("%d", &a[i]);
    }

    m = min_azzera (a, 10);

    stampa (a, 10);
    printf("%d \n", m);
    return 0;
}
