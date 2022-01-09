#include <stdio.h>
#include <stdlib.h>

struct elemento
{
    int info;
    struct lista *next;
};
typedef struct elemento ElementoDiLista;
typedef ElementoDiLista* elementodilista;

void inserisci_testa (ElementoDiLista** lista, int elem)
{
    ElementoDiLista* aux;
    aux = malloc(sizeof(ElementoDiLista));
    aux->info = elem;
    aux->next = *lista;
    *lista = aux;
}

void Stampa_Lista(ElementoDiLista *lista)
{
    while (lista != NULL) {
        printf(" %d ->", lista->info);
        lista = lista->next;
    }
    printf(" //");
}

void cancella_primo (ElementoDiLista **lista)
{
    ElementoDiLista* aux;
    if (*lista != NULL)
    {
        aux = *lista;
        *lista = (*lista)->next;
        free(aux);
    }
}

int main()
{
    int eleL, stop=0;
    ElementoDiLista* lista = NULL;

    while ( stop == 0)
    {
        printf("inserire un elemento: ");
        scanf("%d", &eleL);
        if (eleL > 0)
            inserisci_testa(&lista, eleL);
        else if (eleL == 0)
            cancella_primo(&lista);
        else if (eleL < 0)
        {
            Stampa_Lista(lista);
            stop = 1;
        }
    }

    return 0;
}
