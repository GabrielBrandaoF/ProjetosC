#include <stdio.h>

int main (){
 int valor=1;
 int soma=0;

 while (valor <=100){
 soma = soma + valor;
 valor++;
 }
 printf("A soma dos valores de 0 a 100 eh de %d", soma);
 
return 0;

}