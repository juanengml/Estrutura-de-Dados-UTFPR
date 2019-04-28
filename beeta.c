#include <stdio.h>
#include <stdlib.h>

typedef struct node{
   int info;
   struct node *next;
} node;

node * list(unsigned data){
	return data;
}

void reverse(node *lista);

node *Append(node *lista, int x){
  if (lista == NULL){
  	node *new = (node *) malloc(sizeof(node));
  	new->info = x;
  	new->next = NULL;
  	return new;
  }
  lista->next = Append(lista->next, x);
  return lista;
}



void imprime(node *lista, int caso){
 switch(caso){ 
  case 1: 
   printf("Normal input \n");
	 while(lista!=NULL){
 		 printf("%d ", lista->info); 
		 lista = lista->next;
	}
  break;
  case 2:
      printf("Reverse input  \n");
      reverse(lista);
  break;    
 }
}

void reverse(node *lista){
	if(lista == NULL){ return; }
	reverse(lista->next);
	printf("%d ", lista->info);
}

// coget procure 

int Input(){
  int data;
  scanf("%d",&data);
  return data;
}

int main(){
   node *lista = list(NULL);
   int numero;
   while(numero != -1){
    numero = Input();
    if (numero != -1)
   	 lista = Append(lista,numero);
   }
   imprime(lista,1);
   printf("\n");
   imprime(lista,2);
   printf("\n");
   return 0;

}