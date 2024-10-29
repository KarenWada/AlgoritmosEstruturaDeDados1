#include<stdio.h>
#include<malloc.h>

typedef int bool;
typedef int TIPOCHAVE;

typedef struct{
    TIPOCHAVE chave;
    \\outros campos...
} REGISTRO;

typedef struct aux{
    REGISTRO reg;
    struct aux* prox;
} ELEMENTO;

typedef ELEMENTO*PONT;

typedef struct{
    PONT inicio;
} LISTAD;
______________________________________

void inicializarLista(LISTAD*lista){
    lista->inicio=NULL;
}

int tamanho(LISTAD*lista){
    POINT fim=lista->inicio;
    int tam=0;
    while(fim!=NULL){
        tam++;
        fim=fim->prox;
    }
    return tam;
}

POINT sequenciaOrdenada(LISTAD*lista, TIPOCHAVE ch){
    POINT pos=lista->inicio;
    while(pos!=NULL && pos->reg.chave<ch) pos=pos->prox;
    if(pos!=NULL && pos->reg.chave==ch) return pos
        return NULL;
}

bool inserirElementoListaOrd(LISTAD*lista, REGISTRO reg){
    TIPOCHAVE ch=reg.chave;
    POINT ant,i;
    i=buscaSequencialOrdenada(lista,ch,&ant);
    if(i!=NULL) return false;
    i= (POINT) malloc(sizeof(ELEMENTO));
    i->reg=reg;
    if(ant==NULL){
        i->prox=lista->inicio;
        lista->inicio=i;
    } else{
        i->prox=ant->prox;
        ant->prox=i;
    }
    return true;
}

boll excluirElemLista(LISTAD* lista, TIPOCHAVE ch){
    POINT ant, i;
    i=buscaSequencialOrdenada(lista,ch,&ant);
    if(i==NULL) return false;
    if(ant=NULL) l->inicio=i->prox;
    else ant->prox=i->prox;
    free(i);
    return true;
}

void reinicializarLista(LISTAD*lista){
    POINT end=lista->inicio;
    while(end!=NULL){
        POINT apagar=end;
        end=end->prox;
        free(apagar);
    }
    lista->inicio=NULL;
}