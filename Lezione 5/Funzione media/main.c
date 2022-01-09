#include <stdio.h>
#include <stdlib.h>

float media (float s, float j) {
    float m = s / j;
    return m;
}

int main()
{
    int n;
    float m, s=0, j=0;

    for (int i=0;i<10;i++) {
        printf("numero: ");
        scanf("%d", &n);
        if (n > 0) {
            s = s + n;
            j++;
        }
    }
    m = media (s,j);
    printf("la media e': %.2f", m);
    return 0;
}
