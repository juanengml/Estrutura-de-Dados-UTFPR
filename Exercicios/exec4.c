#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int info;
    struct Node *proximo;
    struct Node *anterior;

}node;


node *cria_node(char info){
   node *novo = (node *)malloc(sizeof(node));
   novo->info = info;
   novo->anterior = novo->proximo = NULL;
   return novo;
}

node *cria_lista(int n){
	node *lista = cria_node('A');
	node *ultimo = lista;
	int i;
	for (i=1;i<n;i++) {
        node *novo = cria_node('A'+i);
        ultimo->proximo = novo;
        novo->anterior = ultimo;
        ultimo = novo;
    }

    ultimo->proximo = lista;
    lista->anterior = ultimo;
    return lista;
}

int unico(node *lista){
    if(lista->proximo ==lista && lista->anterior==lista){
    	return 1;
    }else{
    	return 0;
    }
}

void Remove(node *K_value){
	node *proximo = K_value->proximo;
	node *anterior = K_value->anterior;
	anterior->proximo = proximo;
	proximo->anterior = anterior;

	free(K_value);
}


int Input(){
	int aux;
	scanf("%d", &aux);
	return aux;
}


int main() {
    int i,n,k;
    printf("Digite valor de N: ");
    n = Input();
    printf("Digite valor de K: ");
    k = Input();
    node *lista = cria_lista(n);

    while(unico(lista)!=1) {
        for (i = 0; i < k; i++) {
        	lista = lista->proximo;
        }
        printf("%c Saiu da Rodinha {Y_Y}", lista->info);
        printf("\n");
        lista=lista->proximo;
        Remove(lista->anterior);
     }
    printf("%c Ganhador {U_U} !\n", lista->info);
    free(lista);

    return 0;
}


