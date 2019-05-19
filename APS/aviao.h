#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef struct AVIAO{
	int ID;
	int topo;
  int mala[MAX];
}Pilha;


Pilha *cria_aviao(){
	Pilha *p = (Pilha *)malloc(sizeof(Pilha));
  p->ID = 0;
	p->topo = -1;
	return p;
}

Pilha empilha(Pilha *p, int c){
  p->topo++;
	p->mala[p->topo] = c;
  printf("VALOR EMPILHADO %d\n", c);
}

int desempilha(Pilha *p){
	int t = p->mala[p->topo];
	p->topo--;
	return t;
}


int hora(Pilha *p,int Valor)
{
  int result,i = 0;

  while (1){
    result = desempilha(p);
    if (result == 0 || result == -1){  break ;}
    else{
    printf("\t\t *** HORA:  [%d:%d] - PESO MALA [%d] *** \n", Valor+1,i,result);
    i = i+1;
  }
}

}

int takeoff(Pilha *p){

}


void OlaMundo(){
  printf("Ola Mundo\n\n\n\n");
}
