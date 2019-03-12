#include <stdio.h>

#include <stdlib.h>

#include <string.h>


typedef struct pessoa 
{
    int check ; 
    char nome[20];
    int idade ;
    
}Pessoa;



int main (){

    Pessoa p[20];
    int value = 0;
    int i,j;
    
    printf("Value: ");
    scanf("%d",&value);

    for(i = 0 ; i < value ; i++) 
    {
      printf(" Digite nome da pessoa: ");
      scanf("%s", p[i].nome);
      printf(" Digite a idade da pessoa: ");
      scanf("%d", &p[i].idade);
    }

    for(i = 0 ; i < value; i++)
    {
        if (p[i].check != 1)
        {
          p[i].check = 1;
          printf("%d : %s",p[i].idade,p[i].nome);
        }
        for(j=0;j<value;j++)
        {
            if ((p[i].idade == p[j].idade) && p[j].check != 1)
            {
                p[j].check = 1;
                printf(" %s",p[j].nome);
            }
        
        }
        printf("\n");
    }

}