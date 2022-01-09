#include <stdio.h>
#include <stdlib.h>

struct elemento
{
    int info;
    struct elemento* next;
};
typedef struct elemento ElementoDilista;
typedef ElementoDilista* ElementoDiElementi;

void inserisci_coda (ElementoDilista **lista, int ele)
{
    ElementoDilista* ultimo;
    ElementoDilista* new_elem= malloc(sizeof(ElementoDilista));
    new_elem->info = ele;
    new_elem->next = NULL;
    if (*lista == NULL)
        *lista = new_elem;
    else
    {
        ultimo = *lista;
        while (ultimo->next != NULL)
            ultimo = ultimo->next;
        ultimo->next = new_elem;
    }
}

void inserisci_testa (ElementoDilista** lista, int elem)
{
    ElementoDilista* aux;
    aux = malloc(sizeof(ElementoDilista));
    aux->info = elem;
    aux->next = *lista;
    *lista = aux;
}

void elimina_elemento(ElementoDilista **lista, int ele)
{
    ElementoDilista* aux = *lista;
    ElementoDilista* precedente = NULL;
    ElementoDilista* tmp;
    int ok=0;
    while (aux != NULL && ok == 0)
    {
        if (aux->info == ele)
        {
            tmp = aux;
            if (precedente == NULL)
            {
                *lista = aux->next;
                free(tmp);
                ok =1;
            }
            else
            {
                precedente->next = aux->next;
                free(tmp);
                ok=1;
            }
        }
        else
        {
            precedente = aux;
            aux = aux->next;
        }
    }
}

void Stampa_lista(ElementoDilista *lista)
{
    while (lista != NULL) {
        printf(" %d ->", lista->info);
        lista = lista->next;
    }
    printf(" //");
}

int main()
{
    int ok=0, v;
    ElementoDilista* lista = NULL;

    while (ok == 0)
    {
        printf("Inserire un numero: ");
        scanf("%d", &v);
        if (v < 0)
            elimina_elemento(&lista, v*(-1));
        else if (v > 0 && v%2==0)
            inserisci_testa(&lista, v);
        else if (v > 0 && v%2!=0)
            inserisci_coda(&lista, v);
        else if (v == 0)
        {
            Stampa_lista(lista);
            ok = 1;
        }
    }
    return 0;
}
