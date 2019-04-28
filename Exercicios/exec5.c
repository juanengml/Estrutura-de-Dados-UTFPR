#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define MAX 100

typedef struct Pilha{
	int n[MAX];
	int topo;
}pilha;

pilha *cria_pilha();
pilha empilha(pilha *p, int c);
int desempilha(pilha *p);



pilha *cria_pilha(){
	pilha *p = (pilha *)malloc(sizeof(pilha));
	p->topo = -1;
	return p;
}

pilha empilha(pilha *p, int c){
	p->topo++;
	p->n[p->topo] = c;
}

int desempilha(pilha *p){
	int t = p->n[p->topo];
	p->topo--;
	return t;
}




int main(){
    int compara = 0;
	pilha *pilha;
	char str[MAX], c;
	int i = 0, resultado;
    int j = 0;
	scanf(" %[^\n]s", str);
//    printf("%s ", str);
	pilha = cria_pilha();

	//empilha
	while(str[i] != '\0' && i < 100){

		 if( isdigit (str[i]) ){
	        empilha(pilha, str[i] - '0' );
	    }
	    switch(str[i]){
	    	case 42:
		    	resultado = 1;
		    	compara = pilha->topo ;
				if(compara > 0){
				  for (j = 0 ; j < 2; j++){
					resultado = resultado + desempilha(pilha);
     				}
				}
				else resultado = resultado * desempilha(pilha);

		        empilha(pilha, resultado);
		        break;
		    case 43:  
	            resultado = 0;
	            compara = pilha->topo ;
				if(compara > 0){
				 for (j = 0 ; j < 2; j++){
					resultado = resultado + desempilha(pilha);
     				}
				}
				else resultado = resultado + desempilha(pilha);
		        empilha(pilha, resultado);  
	    }


	    i++;
	}


	printf("\t%d\n", pilha->n[0]);

	free(pilha);

	return 0;

}

