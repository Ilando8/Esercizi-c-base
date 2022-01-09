#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10], i=0, ok=0;

    for (i = 0; i<10; i++) {
        printf("elemento %d:", i+1);
        scanf("%d", &a[i]);
    }
    i = 0;
    while (i<10 && ok==0) {
        if (a[i] == (a[i+1]-a[i-1]))
            ok=1;
        i++;
    }
    if (ok == 1)
        printf("indice:  %d", i-1);
    else
        printf("%d", -1);
    return 0;
}
