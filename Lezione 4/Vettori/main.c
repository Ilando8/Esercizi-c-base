#include <stdio.h>
#include <stdlib.h>
void caricamento (int v[], int l) {
    for (int i=0;i<l;i++){
        printf ("Elemento %d:", i+1);
        scanf("%d", &v[i]);
    }
}
void stampaV (int v[], int l) {
    for (int i=0;i<l;i++) {
        printf("[%d]", v[i]);
    }
    printf("\n");
}
int sommaV (int a, int b) {
    int s;
    s = a+b;
    return s;
}

int main()
{
    int a[5], b[5], l=5, s;

    caricamento (a,l);
    caricamento (b,l);
    stampaV (a,l);
    stampaV (b,l);
    for (int i=0;i<5;i++) {
        printf("[%d]", s=sommaV(a[i],b[i]));
    }
    return 0;
}
