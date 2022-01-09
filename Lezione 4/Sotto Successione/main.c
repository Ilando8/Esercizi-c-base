#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10], i, ok = 0;

    for (i=0; i<10; i++)
    {
        printf("elemento %d:", i+1);
        scanf("%d", &a[i]);
    }
    i=0;
    while (i<10 && ok == 0)
    {
        if ((a[i]%2)==0 && a[i]>0 || a[i]<0 && a[i+1]>0)
            printf("%d \n", a[i]);
        else if (a[i] == 0)
            printf("%d \n", a[i]);
        i++;
        if (i == 9)
            ok = 1;
    }
    return 0;
}
