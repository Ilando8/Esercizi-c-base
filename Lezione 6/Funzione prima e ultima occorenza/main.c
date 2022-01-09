#include <stdio.h>
#include <stdlib.h>

void primoultimopari (int arr[], int dim, int* p,int* u)
{
    for (int i=0; i<=dim; i++)
    {
        if (arr[i]%2==0)
            *u = i;
        if (arr[dim-i]%2==0)
           *p = i;
    }
    if (*u == 0 && *p == 0)
    {
        *p = -1;
    }

}
int main()
{
    int a[7], primaocc=0, ultimaocc=0;

    for (int i=0; i<7; i++)
    {
        printf("elemento %d:", i+1);
        scanf("%d", &a[i]);
    }
    primoultimopari (a,7,&primaocc, &ultimaocc);
    if (primaocc == -1)
        printf("%d \n", -1);
    else
    {
        printf("%d ", primaocc);
        printf(" %d \n", ultimaocc);
    }

    return 0;
}
