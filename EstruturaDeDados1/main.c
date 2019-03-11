// ESTRUTURA DE DADOS 4 struct
// serie potencialmente heterogemea de variavies

#include <stdio.h>
#include <string.h>

/****
struct pessoa{
 char nome[100];
 int idade;
}
****/ 


struct data{
  int dia,mes , ano;
};


int main(){
/**
 struct data d;
 d.dia = 12;
 d.mes = 3;
 d.ano = 2019;

**/
 struct data d = (struct data){12,2,2013};
 printf("%d:%d:%d\n",d.dia, d.mes, d.ano);

 return 0;
/*
 struct Pessoa p;
 int i;
 p.idade = 18;
 strcpy(p.nome, "joao");

 printf("Nome: %s\nIdade: %d\n" , p.nome, p.idade);
 //scanf("%d",&p.idade);

 return 0;
**/

}