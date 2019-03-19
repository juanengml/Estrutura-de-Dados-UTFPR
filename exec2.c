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

//troca(&a, &b);


/***
void ordena(int *v, int N){
	int x,y,z;

	x = N / 2;
	y = x;
}
**/

/*
void ordena(int *a, int fim) {
    int i, f, x, y;
     
    i = 0;
    f = fim;
    x = a[(i + f) / 2];
     
    while(i <= f) {
        while(a[i] < x && i < f) {
            i++;
        }
        while(a[f] > x && f > i)f--;
        if(i <= f) {
            y = a[i];
            a[i] = a[f];
            a[f] = y;
            i++;
            f--;
        }
    }
     
    if(f > i) {
        ordena(a, f);
    }
    if(i < f) {
        ordena(a, i);
    }
}

*/