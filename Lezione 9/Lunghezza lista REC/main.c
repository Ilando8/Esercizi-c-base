#include <stdio.h>
#include <stdlib.h>

struct elemento
{
    int dato;
    struct elemento* next;
};
typedef struct elemento elementoDiLista;
typedef elementoDiLista* listaDiElementi;

void inserisci_coda (elementoDiLista **lista, int ele)
{
    elementoDiLista* ultimo;
    elementoDiLista* new = malloc(sizeof(elementoDiLista));
    new->dato = ele;
    new->next = NULL;
    if (*lista == NULL)
        *lista = new;
    else
    {
        ultimo = *lista;
        while (ultimo->next != NULL)
            ultimo = ultimo->next;
        ultimo->next = new;
    }
}

int RecLenght(elementoDiLista* lista)
{
    int c=0;
    if (lista == 0)
        return 0;
    while (lista != NULL)
    {
        c++;
        lista = lista->next;
    }
    return c;
}

int main()
{
    elementoDiLista* lista = NULL;
    int n, ok=0, l;

    while (ok == 0)
    {
        printf("Input: ");
        scanf("%d", &n);
        if (n > 0)
            inserisci_coda(&lista, n);
        else
            ok = 1;
    }
    l = RecLenght(lista);
    printf("%d", l);
    return 0;
}
