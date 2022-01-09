#include <stdio.h>
#include <stdlib.h>

int cout_larger(int x, int a[], int l) {
    int c=0;
    for (int i=0;i<l;i++)
        if (x < a[i])
        c++;
    return c;
}

int main()
{
    int x, a[5],c;

    printf("inserire un numero: ");
    scanf("%d", &x);
    for (int i=0;i<5;i++){
        printf ("Elemento %d:", i+1);
        scanf("%d", &a[i]);
    }

    c = cout_larger(x,a,5);
    printf("%d \n", c);
    return 0;
}
