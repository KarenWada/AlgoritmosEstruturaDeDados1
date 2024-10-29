#include <stdio.h>
#define max 5

typedef struct
{
    int chave;
    char nome[50];
} TipoItem;

typedef struct
{
    TipoItem itens[max];
    int ultimo;
} ListaLSE;
