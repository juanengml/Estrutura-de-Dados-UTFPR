#include <stdio.h>
#include <stdlib.h>

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

