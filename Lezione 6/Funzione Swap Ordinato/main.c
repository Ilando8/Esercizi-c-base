#include <stdio.h>
#include <stdlib.h>

void ordered_swap  (int a, int b, int c)
{
    int m, g, p;
    //grande
    if (a>b)
        if (a>c)
            g = a;
        else
            g = c;
    else if (b>c)
        g = b;
    else
        g = c;
    //piccolo
    if (a<b)
        if (a<c)
            p = a;
        else
            p = c;
    else if (b<c)
        p = b;
    else
        p = c;
    // medio
    if (g>a && a>p)
        m=a;
    else if (g>b && b>p)
            m=b;
    else if (g>c && c>p)
            m=c;

    stampa (p,m,g);
}

void stampa (int p, int m, int g)
{
    printf("%d \n", p);
    printf("%d \n", m);
    printf("%d \n", g);
}

int main()
{
    int a,b,c;

    printf("inserire il primo numero: ");
    scanf("%d", &a);
    printf("inserire il secondo numero: ");
    scanf("%d", &b);
    printf("inserire il terzo numero: ");
    scanf("%d", &c);

    ordered_swap (a,b,c);

    return 0;
}
