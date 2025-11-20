#include <stdio.h>

int main(){

    int eleitores;
    int candidato1 =0;
    int candidato2 =0; 
    int candidato3 =0;

    printf("--------------Candidatos Participantes--------------\n");
    printf("1. Candidato A\n");
    printf("2. Candidato B\n");
    printf("3. Candidato C\n");

    printf("Digite a quantidade de eleitores: ");
    scanf("%d", &eleitores);
    printf("\nDigite o numero do seu candidato\n");

    int votos[eleitores];

     for(int i=0; i<eleitores; i++){
        printf("Eleitor %d: ", i+1);
        scanf("%d", &votos[i]);
          if(votos[i]==1){
        candidato1+=votos[i];
          }
          else if(votos[i]==2){
        candidato2+=votos[i];
          }
          else if(votos[i]==3){
        candidato3+=votos[i];
          }
    }

    printf("--------------Resultado das eleicoes--------------\n");
    printf("Candidato 1: %d votos\n", candidato1);
    printf("Candidato 2: %d votos\n", candidato2/2);
    printf("Candidato 3: %d votos\n", candidato3/3);

return 0;

}