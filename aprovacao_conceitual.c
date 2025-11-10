#include <stdio.h>

int main(){
    float nt1, nt2, med;

   printf("Digite as duas notas do aluno: ");
   scanf("%f %f", &nt1, &nt2);

   med=(nt1+nt2)/2;

   if(med>10){
    fprintf(stderr,"Invalido. A media nao pode ser maior que 10.");
   }else if(med>=9 && med<=10){
    printf("Conceito: A");
   }else if(med>=7.5 && med<9){
     printf("Conceito: B");
   }else if(med>=6 && med<7.5){
     printf("Conceito: C");
   }else if(med>=4 && med<6){
     printf("Conceito: D");
   }else{
     printf("Conceito: E");
   }
   
 return 0;
}