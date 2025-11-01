#include <stdio.h>

int main (){
  int max_it = 0;
  printf("Digite o numero maximo de interacoes: ");
  if(!scanf("%d", &max_it)){
    fprintf(stderr, "Numero invalido\n");
    return 1;
  }
  for (int i=0; i<=max_it; i++){
    printf("%d ", i); 
  }
printf("\nSerie concluida!");
}