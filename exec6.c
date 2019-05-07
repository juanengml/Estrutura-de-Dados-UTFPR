
#include <stdio.h>
#include <stdlib.h>

typedef struct tree
{
  int numero;
  struct tree* direita;
  struct tree* esquerda;
} Tree;

Tree* Shazam_Arvore()
{
  return NULL;
}

int checa_arvore_vazia(Tree* t) /* Verifica se a árvore está vazia */
{
  return t == NULL;
}


void add(Tree** t, int numero)
{
  if(*t == NULL)
  {
    *t = (Tree*)malloc(sizeof(Tree));
    (*t)->esquerda = NULL;
    (*t)->direita = NULL;
    (*t)->numero = numero; 
  } else {
    if(numero < (*t)->numero) 
    {
      add(&(*t)->esquerda, numero);
    }
    if(numero > (*t)->numero) 
    {
      add(&(*t)->direita, numero);
    }
  }
}

int isInTree(Tree* t, int numero) {
  
  if(checa_arvore_vazia(t)) {
    return 0;
  }
    return t->numero==numero || isInTree(t->esquerda, numero) || isInTree(t->direita, numero);
}

int main()
{
  Tree* t = Shazam_Arvore(); 
  int valueMax =0;
  int x;
  int busca;
  int i;
  printf("Definaq valor Maximo de Entradas: ");
  scanf("%d",&valueMax);
  for(i = 0; i < valueMax; i++){
  	printf("%d. Valor: ",i);
  	scanf("%d",&x);
  	add(&t, x);
  }


  printf("\nDigite o valor para Buscar: ");
  scanf("%d",&busca);
  if(isInTree(t, busca)) { 
    printf("\n SIM, O numero %d pertence a arvore!\n", busca);
  } else {
     printf("\n NÃO, O numero %d NAO pertence a arvore!\n", busca);
  }
  
  
  free(t);
  
  return 0;
}
