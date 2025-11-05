#include <stdio.h>
#define MAX_NUM 5

int main(){
  int num[MAX_NUM], soma;

  for(int i=0; i<MAX_NUM; i++){
    printf("Digite o numero: %d ", i);
    scanf("%d", &num[i]);
  }
 soma = 0;
 for(int i=0; i<MAX_NUM; i++){
 soma+=num[i];
 }
 printf("O resultado da soma eh: %d\n ", soma);

  return 0;
}