#include <stdio.h>
#include <ctype.h>

int main(){
    char letra;
   printf("M-matutino\nV-Vespertino\nN-Noturno.\n");
   printf("Digite a letra de acordo com seu turno: ");
   scanf("%c", &letra);
   if(tolower(letra)=='m'){
    printf("Bom dia!");
   }else if (tolower(letra)=='v'){
    printf("Boa tarde!");
   }else if (tolower(letra)=='n'){
    printf("Boa noite!");
   }else{
    fprintf(stderr,"ERRO! Letra inválida.");
   }
}