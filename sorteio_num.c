#include <stdio.h>
#include <stdlib.h>
#define TAM 5
#include <time.h>

void imprimir_vetor(int vetor[], int tamanho) {
    printf("\n--- Vetor Sorteado ----------------------------\n");
    printf("Numeros sorteados: [");
    for (int i = 0; i < tamanho; i++) {
        if(i < tamanho - 1)
            printf("%d, ", vetor[i]);
        else
            printf("%d", vetor[i]);
    }
    printf("]\n");
    printf("-----------------------------------------------\n");
}

int main(){
   
    srand(time(NULL));
    
    int num;          
    int achou;       
    int v[TAM];      
    int acertos = 0;  
    const int max_chances = 5; 

    for(int i = 0; i < TAM; i++) v[i] = rand() % 30;

    
    for (int tentativa = 1; tentativa <= max_chances; tentativa++) {
        printf("\n--- Tentativa %d de %d ---\n", tentativa, max_chances);
        
        printf("Digite um numero (0 a 30): ");
        scanf("%d", &num); 
        
        achou = 0;
        
        for(int i = 0; i < TAM; i++){
            if(v[i] == num){
                achou = 1; 
                break;     
            }
        }
        
        if(achou){
            printf("ACERTOU! O numero %d foi encontrado no vetor.\n", num);
            acertos++; 
        } else {
            printf("ERROU. O numero %d nao foi encontrado.\n", num);
        }
    } 
    
    printf("\n----------------------------------------------\n");
    printf("Fim de jogo!\n");
    printf("Voce utilizou %d chances.\n", max_chances);
    printf("Total de acertos: **%d**\n", acertos);
    printf("----------------------------------------------\n");

    imprimir_vetor(v, TAM);

    return 0;
}