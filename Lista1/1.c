#include <stdio.h>
#include <stdlib.h>

/**
Escreva um programa em C que lê do usuario um inteiro N seguido de N inteiros, 
e preenche um vetor de tamanho N com os inteiros lidos. Em seguida, 
determine e imprima ao usuario a soma dos elementos no vetor.
**/

typedef struct {
     int value;
    
} dados;

//dados data[10];

int main(){
	int value_inicial;
	int i,stop = 0;
	int conta = 0;
	int soma = 0;
//	struct Valores val[100];
    dados data[1000];
    
    for(i=0; i<1000; i++) {data[i].value = 0;}

    while(1){
    	printf("Tecle 0 para Sair\n");
    	printf("Novo Valor: ");
    	scanf("%d",&i);
    	printf("%d\n", i);

    	data[conta].value = i;
    	conta = conta + 1;
    	
    	if (i == 0)
    	{
    	 for (i = 0 ; i < 10; i++){
    	 	soma = data[i].value + soma;
    	 }
    	 printf("Soma: %d\n",soma );
    	 break;
    	}


    	printf("\n");
    }
	return 0;
}