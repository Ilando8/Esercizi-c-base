#include <stdio.h>
#include <stdlib.h>

int MCD(int n, int m) {
    int d;
    while (n>0) {
        if (n==m || n==0 || m==0)
            return n;
        if (n>m)
            n = n - m;
        else {
            d = m;
            m = n;
            n = d;
        }
    }
    return d;
}


int mcm(int n, int m) {
   int d = (n*m)/MCD(n,m);
   return d;
}

int main()
{
    int n,m, x, y;

    printf("inserire N: ");
    scanf("%d", &n);
    printf("inserire M: ");
    scanf("%d", &m);

    x=MCD(n,m);
    y=mcm(n,m);

    printf("%d \n", x);
    printf("%d \n", y);
    return 0;
}
