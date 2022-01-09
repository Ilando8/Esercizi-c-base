#include <stdio.h>
#include <stdlib.h>

void multipli (int m, int n)
{
    int r=0;
    for (int i=1;  i<=n; i++)
    {
        r = i % m;
        if (r==0)
            printf("%d \n", i);
    }
}

int main()
{
    int n, m;

    printf("inserire N: ");
    scanf("%d", &n);
    printf("inserire M: ");
    scanf("%d", &m);

    multipli(m,n);

    return 0;
}
