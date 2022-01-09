#include <stdio.h>
#include <stdlib.h>

struct elemento
{
    int dato;
    struct elemento* next;
};
typedef struct elemento ElementoDiLista;
typedef ElementoDiLista* ListaDiElementi;

void inserisci_coda_Ordinato (ElementoDiLista **lista, int ele)
{
    ElementoDiLista* aux;
    ElementoDiLista* new_elem= malloc(sizeof(ElementoDiLista));
    new_elem->dato = ele;
    new_elem->next = NULL;
    if (*lista == NULL || (*lista)->dato >= ele)
        *lista = new_elem;
    else
    {
        aux = *lista;
        while (aux->next != NULL && aux->next->dato < ele)
        {
            aux = aux->next;
        }
        new_elem->next = aux->next;
        aux->next = new_elem;
    }
}

void stampa_lista (ElementoDiLista *lista)
{
    while (lista != NULL)
    {
        printf("%d -> ", lista->dato);
        lista = lista->next;
    }
    printf(" //");
}


int main()
{
    ElementoDiLista* lista = NULL;
    int n, ok=0;

    while (ok == 0)
    {
        printf("Inserire un numero: ");
        scanf("%d", &n);
        if (n < 0)
            ok = 1;
        else
            inserisci_coda_Ordinato(&lista, n);
    }
    stampa_lista (lista);
    return 0;
}
