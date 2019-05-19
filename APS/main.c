#include <stdio.h>
#include <stdlib.h>
#include "aviao.h"

#define MAX 10

typedef struct Aviao{
	int ID;
	int topo;
  int mala[MAX];
}pilha;


int input(){
  int peso;
  printf("Valor KG da mala: ");
  scanf("%d",&peso);
  return peso;
}

int menu(){
  int option = 0;
  int result;
  int i = 0;
  pilha *Aviao;
  int peso,peso1;
  int hora_agora;
  printf("\t0 - sair\n\t1 - load(Cria um avião)\n\t2 - takeoff(pouso e esvaziar baggages)\n\t3 - end(stop simulation)\n\t\t\t-> ");
  scanf("%d",&option);
  switch (option) {
    case 0:
      printf("STOP simulation %d\n",option );

    break;
    case 1:
      printf("\t\tLOAD cria um novo aviao %d\n",option );
      //OlaMundo();
      Aviao = cria_aviao();
      while (i <= 10)
      {
        peso1 = input();
        if (peso1 == 0){
          i = 0;
          printf("PRONTO !\n" );
          break;
        }
        if (peso1 == -1){
          empilha(Aviao, peso1);
          result = desempilha(Aviao);
          printf("\t\t Valor %d  - ", result );
          result = desempilha(Aviao);
          printf("Mala %d Extraviada \n", result);
        }
        else{
          if (i == 10){
            printf("BAGAGEIRO CHEIO !!\n" );
            break;
          }else{
            empilha(Aviao, peso1);
            i = i+1;
          }
        }
      }

      break;


    case 2:
     printf("\t\tTAKEOFF simulation optaion MENU %d\n",option );
     printf("\n\n\t DIGITE A HORARIO DE SAIDA  => ");
     scanf("%d",&hora_agora );
     printf("\n\n\n");
     hora(Aviao,hora_agora);
     // result = desempilha(Aviao);

    break;
    case 3:
    printf("STOP simulation %d\n",option );
    free(Aviao);
    break;
  }
  return option;
}


int main(){
  int m;
  while (1){
    m = menu();
    if (m == 0 || m == 3){
      break;
    }
  }
}
