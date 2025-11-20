#include <stdio.h>

int main(){
  float popA, popB;
  double ataxa=0.03;
  double btaxa=0.015;
  int anos=0;

  printf("A populacao da cidade A eh de: ");
  scanf("%f", &popA);
  printf("\nA populacao da cidade B eh de: ");
  scanf("%f", &popB);

  while(popA<popB){
    popA=popA*(1+ataxa);
    popB=popB*(1+btaxa);
    anos++;
  }

  printf("\nA populacao da cidade A ultrapassara a da cidade B em %d anos.", anos);

return 0;
}