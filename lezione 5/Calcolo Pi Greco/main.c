#include <stdio.h>
#include <stdlib.h>

float approx_pi (int n, float k) {
    float s, stot;
    if (n==1)
        return k;
    else
    for (int i=0;i<=n-1;i++) {
        if (i%2==0) {
            s = - (4 + 1/k);
            k+=2;
        } else {
            s = (4 + 1/k);
            k+=2;
        }
        stot = stot + s;
    }
    return stot;
}

int main()
{
    int n;
    float s, k = 1;

    printf("inserire un numero: ");
    scanf("%d", &n);
    while (n<0) {
        printf("inserire un numero positivo: ");
        scanf("%d", &n);
    }
    s = approx_pi (n,k);
    printf("%.6f \n", s);

    return 0;
}
