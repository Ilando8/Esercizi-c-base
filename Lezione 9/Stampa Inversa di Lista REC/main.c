#include <stdio.h>
#include <stdlib.h>
struct elemento
{
    int info;
    struct elemento* next;
};
typedef struct elemento elementoDiLista;

void inserisci_testa(elementoDiLista** lista, int ele)
{
    elementoDiLista* aux;
    aux = malloc(sizeof(elementoDiLista));
    aux->info = ele;
    aux->next = *lista;
    *lista = aux;
}

void StamInv (elementoDiLista* lista)
{
    if (lista == NULL)
        return;
    else
    {
        StamInv(lista->next);
        printf("%d -> ", lista->info);
    }
}

int main()
{
    int n, ok=0;
    elementoDiLista* lista = NULL;

    while (ok == 0)
    {
        printf("Input: ");
        scanf("%d", &n);
        if (n > 0)
            inserisci_testa(&lista, n);
        else
            ok = 1;
    }
    StamInv(lista);
    printf("NULL");
}
