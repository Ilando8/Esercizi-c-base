#include <stdio.h>
#include <stdlib.h>

struct elemento
{
    int info;
    struct elemento* next;
};
typedef struct elemento elementoDiLista;
typedef elementoDiLista listaDiElementi;

void inserisci_testa(elementoDiLista** lista, int ele)
{
    elementoDiLista* aux;
    aux = malloc(sizeof(elementoDiLista));
    aux->info = ele;
    aux->next = *lista;
    *lista = aux;
}

void cancList(elementoDiLista** lista, int ele)
{
    elementoDiLista* aux;
    if ((*lista) == NULL)
        return;
    else
    {
        if ((*lista)->info%ele == 0)
        {
            aux = *lista;
            *lista = aux->next;
            free(aux);
            cancList(&(*lista), ele);
        }
        else
            cancList(&(*lista)->next, ele);
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
    int n, m, ok=0;
    elementoDiLista* lista = NULL;

    printf("inserire un elemento: ");
    scanf("%d", &m);
    while (ok == 0)
    {
        printf("Input: ");
        scanf("%d", &n);
        if (n > 0)
            inserisci_testa(&lista, n);
        else
            ok = 1;
    }

    cancList(&lista, m);
    RecStampa(lista);
    return 0;
}
