#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, f=1;
    printf("inserire un numero: ");
    scanf("%d", &x);

    for (int i=x; i>=1; i--) {
        f *= i;
    }

    printf("%d \n", f);
    return 0;
}
