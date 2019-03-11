// ESTRUTURA DE DADOS 3 matriz

#include <stdio.h>


 
int main(){
 // ler N, coloca I em uma matrix NxN, imprimir;


  int N , i, j;
  int mat[100][100];

  scanf("%d",&N);
  

  for (i = 0; i < N; i++){
     for (j = 0; j < N; j++){
   //       if (i==j){
   //         mat[i][j] = 1;
   //       }else{
   //         mat[i][j] = 0;
   //       }
          mat[i][j] = (i==j) ? 1 : 0;

   }
 }

 // daqui pra baixo n funciona 
 
 for (i = 0; i < N; i++){
     for (j = 0; j < N; j++){
       printf("%d",mat[i[j]])
     }
  }

 return 0;
}