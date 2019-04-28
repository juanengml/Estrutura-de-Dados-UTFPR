#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
   int info;
   struct nodo *proximo;
} nodo;

nodo * make_list(){
	return NULL;
}


nodo *insere(nodo *lista, int x){
  if (lista == NULL){
  	nodo *novo = (nodo *) malloc(sizeof(nodo));
  	novo->info = x;
  	novo->proximo = NULL;
  	return novo;
  }
  lista->proximo = insere(lista->proximo, x);
  return lista;
}



void imprime(nodo *lista){
	while(lista!=NULL){
		printf("%d ", lista->info);
		lista = lista->proximo;
	}
}

void Contrario(nodo *lista){
	if(lista == NULL) return;
	Contrario(lista->proximo);
	printf("%d ", lista->info);
}

int main(){
   nodo *lista = make_list();
   int numero;
   while(numero != -1){
   	scanf("%d",&numero);
   	lista = insere(lista,numero);
   	
   }
   imprime(lista);
   printf("\n");
   Contrario(lista);
   printf("\n");
   return 0;

}