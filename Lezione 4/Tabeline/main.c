#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("inserire un numero: ");
    scanf("%d", &x);

    for (int i=1;i<=10;i++) {
        printf("%d \n", x*i);
    }
    return 0;
}
