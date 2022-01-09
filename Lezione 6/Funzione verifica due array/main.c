#include <stdio.h>
#include <stdlib.h>

int caricamentoV(int a[],int l)
{
    for (int i=0; i<3; i++)
    {
        printf("Elemento %d: ", i+1);
        scanf("%d", &a[i]);
    }
}

int MinAr(int a[], int b[], int dim)
{
    int i=0, j=0, k=0;
    while (i<dim && j!=3)
    {
        if (a[j]<b[i])
        {
            k++;
            i++;
        }
        else
        {
            j++;
            i=0;
            k=0;
        }
    }
    if (k==3)
        return 1;
    else
        return 0;
}

int main()
{
    int a[3], b[3], s;

    caricamentoV(a,3);
    caricamentoV(b,3);

    s = MinAr(a,b,3);

    if (s == 1)
        printf("TRUE");
    else if (s == 0)
        printf("FALSE");

    return 0;
}
