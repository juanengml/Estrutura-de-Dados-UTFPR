#include <stdio.h>

int fat(int n){
  int rest = n;
  if (n==0){
   return 1;
    }
  while(n > 1){
   rest = rest * (n - 1);
   n = n - 1;
  }
  return rest;
}


int main(){
   int N;
   scanf("%d", &N);
   printf("%d\n",fat(N));
  return 0;
}
