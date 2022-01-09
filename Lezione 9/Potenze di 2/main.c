#include <stdio.h>
#include <stdlib.h>

int Pot2 (int n)
{
    if (n == 1)
        return 2;
    else if (n >= 2)
    {
        return 2*Pot2(n-1);
    }
}

int main()
{
    int n, p;

    printf("inserire un numero: ");
    scanf("%d", &n);

    p = Pot2(n);
    printf("%d", p);
    return 0;
}
