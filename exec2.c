#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
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
=======
void troca(int * A , int * B );

void ordena(int *data, int n);

int main(){
	int value;
	int i,j,k;
	printf("Valor a ser alocado: ");
	scanf("%d",&value);

	// cria vetor inteiro alocado 
	int *v_alocado = (int *)malloc(value * sizeof(int));

	// zerar  vetor
    for (i = 0 ; i < value; i++){
    	v_alocado[i] = 0;
    }
    printf("Vetor int ZERADO !\n");   

	// pegar valores
    for (j = 0; j < value ; j++ ){
    	scanf("%d",&v_alocado[j]);
    	printf("Valor add: %d\n",v_alocado[j] );
    }

    ordena(v_alocado, value);

    for (k = 0; k < value ; k++)
    	printf("%d ", v_alocado[k]);
    printf("\n");

   free(v_alocado);
   return 0; 
}

void ordena(int *v, int N) 
{
  int i, auxiliar;
  if (N > 0) {
   for (i = 1; i < N; i++) 
   {
    if (v[i - 1] > v[i])
     {
      auxiliar = v[i]; 
      v[i] = v[i - 1];
      v[i - 1] = auxiliar;
      }
     }
    ordena(v, N - 1);
   }
  }

>>>>>>> 168cce546805bc6a9ee5912568c4467dfaed54bb
