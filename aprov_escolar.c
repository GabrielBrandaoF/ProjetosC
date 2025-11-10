#include <stdio.h>

int main(){
   int nota1, nota2, res;
  printf("Digite as duas notas do aluno: ");
  scanf("%d %d", &nota1, &nota2);
res=(nota1+nota2)/2;
  if(res>=7&&res<10){
    printf("O aluno foi aprovado");
  }else if(res==10){
    printf("O aluno foi aprovado com Distincao");
  }else{
    printf("O aluno foi reprovado");
  }
return 0;
}