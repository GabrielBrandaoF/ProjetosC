#include <stdio.h>
#include <string.h>
#include <float.h>

int main(){

   char nome[50];
   float salto[5];
   float melhor_salto, pior_salto, total_saltos, salto_atual, soma_restante, media;

   do{
     printf("Nome do atleta: ");
      if(fgets(nome, sizeof(nome), stdin) == NULL) break;

      nome[strcspn(nome, "\n")]='\0';

      if(strlen(nome)==0){
        break;
      }
  
  melhor_salto = -1;
  pior_salto = FLT_MAX;
  total_saltos = 0;

  printf("\n");

   for(int i=0; i<5; i++){
    printf("Digite o salto %d: ", i+1);
    scanf("%f", &salto[i]);

    int c;
      while ((c = getchar()) != '\n' && c != EOF);
   }

   for(int i=0; i<5; i++){
    salto_atual = salto[i];

    if (salto_atual>melhor_salto){
      melhor_salto = salto_atual;
    }

    if(salto_atual<pior_salto){
      pior_salto=salto_atual;
    }

    total_saltos += salto_atual;

   }

    soma_restante= total_saltos - pior_salto - melhor_salto;

    media = soma_restante/3;

    printf("\nAtleta: %s\n", nome);
        
  
        printf("Primeiro Salto: %.1f m\n", salto[0]);
        printf("Segundo Salto: %.1f m\n", salto[1]);
        printf("Terceiro Salto: %.1f m\n", salto[2]);
        printf("Quarto Salto: %.1f m\n", salto[3]);
        printf("Quinto Salto: %.1f m\n", salto[4]);
        
        printf("\nMelhor salto: %.1f m\n", melhor_salto);
        printf("Pior salto: %.1f m\n", pior_salto);
        printf("Média dos demais saltos: %.1f m\n", media);
        
        printf("\nResultado final:\n");
        printf("%s: %.1f m\n\n", nome, media);

   }while(1);

  return 0;

}