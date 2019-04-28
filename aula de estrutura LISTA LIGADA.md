# Lista Ligada

## segunda feira(25 março de 2019)

#### v[] = {3,7,15,20,42,50};  // mander vetor ordenado 
#### v[] = {3,7,=> ,20, => ,50};  // apaga vetor da esquerda para direita

 3 => 7 => 15 => 20 => 42 => 50 //NULL = 0
 
 modo nó 
 
 - typedef struct Nodo{
     int info;
     struct Nodo * variavel;
 }nodo;
 
 null = vazio 
\0 para fechar string 

--- 
~~~~
This is code
// codigo c 

void insere_meio(nodo * aux, int x);

typedef struct Nodo{  
  int info;
  struct Nodo * prox;
}nodo;`
nodo * cria_lista (){
    return NULL;
}


nodo * insere_comeco(nodo * lista, int x){
      nodo *r = (nodo *)malloc(sizeof(nodo));
      r->info = x;
      r->prox = lista;
      return r;
}

int tamanho(nodo * lista){
    if (lista == NULL)
       return 0;
    return 1 + tamanho(lista->prox);   
}

void imprime(nodo *lista){
    if (lista == NULL) return;
    prinft("%d",lista->info);
    imprime(lista->prox);
}

void insere_meio(nodo * aux, int x){
    nodo * novo = (nodo *) malloc(sizeof(nodo));
    novo->info = x;
    novo->prox = aux -> prox;
    aux->prox= novo;
}

nodo *insere(nodo * lista, int pos , int x){
    if (pos == 0)
        return insere_comeco(lista, x);
    lista-> prox = insere(lista->prox, pos-1, x);    
    return lista;
}


int main(){
    nodo * lista = cria_lista();
    lista = insere_comeco(lista,42);
    lista = insere_comeco(lista,10);
    lista = insere_comeco(lista,5);
    insere_meio( lista ,8);
    insere(lista,2,1);
    printf("tamanho %d\n", tamanho(lista));
    imprime(lista);
    return 0;
}
~~~~
