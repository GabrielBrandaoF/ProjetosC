#include <stdio.h>
#define produto 1.99

int main(){

   printf("\n---------Loja de artigos de R$ 1,99---------\n\n");

   printf("--Tabuada de precos--\n");
   for(int i=1; i<=50; i++){
    printf("1- %.2f * %d = %.2f\n", produto, i, produto*i);
   }
 return 0;
}