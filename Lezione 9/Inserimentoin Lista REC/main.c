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

void InseMU (elementoDiLista** lista)
{
    elementoDiLista* aux;
    elementoDiLista* precedente;
    if ((*lista) == NULL)
        return;
    else
    {
        precedente = *lista;
        *lista = (*lista)->next;
        if ((*lista)->info%2 == 0)
        {
            inserisci_testa(&precedente, -1);
            InseMU(&(*lista)->next);
        }
        else
            InseMU(&(*lista)->next);
    }
}

void RecStampa(elementoDiLista* lista)
{
    if (lista == NULL)
        printf("NULL");
    else
    {
        printf("%d -> ", lista->info);
        RecStampa (lista->next);
    }
}

int main()
{
    elementoDiLista* lista = NULL;
    int n, ok=0;

    while (!ok)
    {
        printf("Input: ");
        scanf("%d", &n);
        if (n > 0)
            inserisci_testa(&lista, n);
        else
            ok = 1;
    }
    InseMU(&lista);
    RecStampa(lista);
    return 0;
}
