#include <stdio.h>
#include <stdlib.h>

struct elemento
{
    int dato;
    struct elemento* next;
};
typedef struct elemento ElementoDiLista;
typedef ElementoDiLista* listaDiElementi;

void inserisci_testa (ElementoDiLista** lista, int ele)
{
    ElementoDiLista* aux;
    aux = malloc(sizeof(ElementoDiLista));
    aux->dato = ele;
    aux->next = *lista;
    *lista = aux;
}

void RecStampa(ElementoDiLista* lista)
{
    if (lista == NULL)
        printf("NULL");
    else
    {
        printf("%d -> ", lista->dato);
        RecStampa (lista->next);
    }
}

int main()
{
    ElementoDiLista* lista = NULL;
    int n, ok=0;
    while (ok==0)
    {
        printf("Input: ");
        scanf("%d", &n);
        if (n > 0)
            inserisci_testa(&lista, n);
        else
            ok = 1;
    }
    RecStampa(lista);
    return 0;
}
