#include <stdio.h>
#include <ctype.h>

int main(){
    char letra;
   printf("Digite a letra: ");
   scanf("%c", &letra);
   if(isalpha(letra)){
   if(tolower(letra)=='a'||'e'||'i'||'o'||'u'){
    printf("Sua letra eh uma vogal");
   }else{
    printf("Sua letra eh uma consoante");
   }
}else{
    printf("Nao foi digitada uma letra");
}
   return 0;

}