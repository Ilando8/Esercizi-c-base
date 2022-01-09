#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=2,n,a,b,f,ok=0;

    printf("Numero Fibonacci: ");
    scanf("%d", &n);

    a=1;
    b=1;

    printf("%d\n",a);
    printf("%d\n",b);

    while (i < n && ok == 0)
    {
        f=a+b;
        a=b;
        b=f;
        printf("%d\n",f);
        i++;
        if (f >= n)
            ok=1;
    }
    return 0;
}
