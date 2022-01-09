#include <stdio.h>
#include <stdlib.h>

float diff_abs (float a,float b)
{
    return a-b;
}

int main()
{
    float a, b, c, d;

    printf("inserire il primo numero: ");
    scanf("%f", &a);
    printf("inserire il secondo numero: ");
    scanf("%f", &b);

    c = diff_abs (a, b);
    d = diff_abs (b, a);

    printf("%.2f \n", c);
    printf("%.2f \n", d);
    return 0;
}
