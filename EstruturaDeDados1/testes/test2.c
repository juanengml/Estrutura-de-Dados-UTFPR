// ESTRUTURA DE DADOS 2 VETOR

#include <stdio.h>

int soma(int vet[], int N){
  int i, value = 0;
  for(i = 0; i < N; i++){
    value +=  vet[i];
  }
  
   return value;
}


// essa bosta n fungou
int main(){

  // ler N, ler N inteiros, imprime na ordem inversa
  int N;
  int v[100];
  int i;
 scanf("%d",&v[N]);
 while (v[N] != -1){
   N++;
   scanf("%d",&v[N]);
 }

 for (i=N; i >= 0 ; i--){
    printf("%d",v[i]);
 }
  printf("\n");
  return 0;
}