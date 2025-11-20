#include <stdio.h>

int main(){
    double divida_inicial; 
    
 
    int parcelas[] = {1, 3, 6, 9, 12};
    double juros_percentual[] = {0.0, 0.10, 0.15, 0.20, 0.25}; 


    int num_cenarios = 5; 
    
  
    printf("Digite o valor da sua divida: R$ ");
    scanf("%lf", &divida_inicial);

    printf("\n----------------------------------------------------------------------\n");
    printf("Valor da Divida\t Valor dos Juros\t Parcelas\t Valor da Parcela\n");
    printf("----------------------------------------------------------------------\n");

    for(int i = 0; i < num_cenarios; i++){
        
        double juros = juros_percentual[i];
        double valor_total = divida_inicial * (1 + juros);
        double valor_juros = valor_total - divida_inicial; 
        int num_parcelas = parcelas[i];    
        double valor_parcela = valor_total / num_parcelas;
        
        printf("R$ %.2lf\t R$ %.2lf\t\t %d\t\t R$ %.2lf\n", valor_total, valor_juros,  num_parcelas,  valor_parcela);
    }
    printf("----------------------------------------------------------------------\n");

    return 0;
}